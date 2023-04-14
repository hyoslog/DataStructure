#include "DFS.h"

bool g_bVisited[VERTEX_MAX] = { false, };

void DFS(const VERTEX vertex)
{
	g_bVisited[vertex] = true;

	cout << VERTEX_STRING[vertex].c_str() << endl;

	for (int i = 0; i < g_Graph[vertex].size(); i++)
	{
		VERTEX nextVertex = static_cast<VERTEX>(g_Graph[vertex][i]);
		if (g_bVisited[nextVertex] == false)
		{
			DFS(nextVertex);
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