#include "DFS.h"

stack<VERTEX> g_Stack;
bool g_bVisited[VERTEX_MAX] = { false, };

void DFS(const VERTEX vertex)
{
	VERTEX current = vertex;
	g_Stack.push(current);
	g_bVisited[current] = true;
	cout << VERTEX_STRING[current].c_str() << endl;

	while (g_Stack.empty() == false)
	{
		current = g_Stack.top();
		g_Stack.pop();

		for (int i = 0; i < g_Graph[current].size(); i++)
		{
			VERTEX nextVertex = static_cast<VERTEX>(g_Graph[current][i]);
			if (g_bVisited[nextVertex] == false)
			{
				g_Stack.push(current);

				current = static_cast<VERTEX>(nextVertex);
				g_Stack.push(current);
				g_bVisited[current] = true;
				cout << VERTEX_STRING[current].c_str() << endl;
				break;
			}
		}
	}
}

int main()
{
	SetupGraph();
	SetupVertexString();

	DFS(VERTEX_A);

	return 0;
}