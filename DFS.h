#pragma once

#include <iostream>

#include <map>
#include <stack>
#include <vector>

using namespace std;

enum VERTEX
{
	VERTEX_A,
	VERTEX_B,
	VERTEX_C,
	VERTEX_D,
	VERTEX_E,
	VERTEX_F,
	VERTEX_G,
	VERTEX_H,
	VERTEX_MAX
};

vector<int> g_Graph[VERTEX_MAX];
void SetupGraph()
{
	g_Graph[VERTEX_A].emplace_back(VERTEX_B);
	g_Graph[VERTEX_A].emplace_back(VERTEX_C);
	g_Graph[VERTEX_A].emplace_back(VERTEX_H);

	g_Graph[VERTEX_B].emplace_back(VERTEX_A);
	g_Graph[VERTEX_B].emplace_back(VERTEX_G);

	g_Graph[VERTEX_C].emplace_back(VERTEX_A);
	g_Graph[VERTEX_C].emplace_back(VERTEX_D);
	g_Graph[VERTEX_C].emplace_back(VERTEX_E);

	g_Graph[VERTEX_D].emplace_back(VERTEX_C);
	g_Graph[VERTEX_D].emplace_back(VERTEX_E);

	g_Graph[VERTEX_E].emplace_back(VERTEX_C);
	g_Graph[VERTEX_E].emplace_back(VERTEX_D);

	g_Graph[VERTEX_F].emplace_back(VERTEX_G);

	g_Graph[VERTEX_G].emplace_back(VERTEX_B);
	g_Graph[VERTEX_G].emplace_back(VERTEX_F);
	g_Graph[VERTEX_G].emplace_back(VERTEX_H);

	g_Graph[VERTEX_H].emplace_back(VERTEX_A);
	g_Graph[VERTEX_H].emplace_back(VERTEX_G);
}

map<VERTEX, string> VERTEX_STRING;
void SetupVertexString()
{
	VERTEX_STRING[VERTEX_A] = "VERTEX_A";
	VERTEX_STRING[VERTEX_B] = "VERTEX_B";
	VERTEX_STRING[VERTEX_C] = "VERTEX_C";
	VERTEX_STRING[VERTEX_D] = "VERTEX_D";
	VERTEX_STRING[VERTEX_E] = "VERTEX_E";
	VERTEX_STRING[VERTEX_F] = "VERTEX_F";
	VERTEX_STRING[VERTEX_G] = "VERTEX_G";
	VERTEX_STRING[VERTEX_H] = "VERTEX_H";
}