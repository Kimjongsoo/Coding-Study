#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1001];
vector<int> graph2[1001];
bool visited[1001];
bool visited2[1001];
void dfs(int n)
{
	visited[n] = true;
	cout << n << ' ';
	for (int i = 0; i < graph[n].size(); i++)
	{
		int x = graph[n][i];
		if (!visited[x])
		{
			dfs(x);
		}
	}
}
void bfs(int n)
{
	queue<int> q;
	q.push(n);
	visited2[n] = true;
	cout << n << ' ';
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];
			if (!visited2[y])
			{
				q.push(y);
				visited2[y] = true;
				cout << y << ' ';
			}
		}
	}
}

int main(void)
{
	int n, m, v;
	int arr[1000];
	int in, in2;
	//ют╥б
	cin >> n;
	cin >> m;
	cin >> v;
	for (int i = 1; i <= m; i++)
	{
		cin >> in;

		cin >> in2;
		graph[in].push_back(in2);
		graph2[in].push_back(in2);

		graph[in2].push_back(in);
		graph2[in2].push_back(in);
	}
	for (int i = 1; i <= 1000; i++)
	{
		sort(graph[i].begin(), graph[i].end());
		sort(graph2[i].begin(), graph2[i].end());
	}

	dfs(v);
	cout << endl;
	bfs(v);

}