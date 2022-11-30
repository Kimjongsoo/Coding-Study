#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<int> graph[9];

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int x = q.pop();
		for (int i = 0; i < graph[x].size(); i++)
		{
			
			if (!visited[graph[x][i]])
			{
				q.push(graph[x][i]));
				visited[graph[x][i]] = true;
			}

		}
		
	}

}