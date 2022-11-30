#include <bits/stdc++.h>

using namespace

bool visited[9];
vector<int> graph[9];

void dfs(int x)
{
	visited[x] = true;
	cout << x << endl;

	for (int i = 0; i < graph[x].size(); i++)
	{
		int y = graph[x][i];
		if (!visited[y]) dfs(y);
	}
}
int main(void)
{
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(8);

	graah[2].push_back(1);
	graph[2].push_back(7);

	graph[3].push_back(1);
	dfs(1);


	return 0;
}