#include <bits/stdc++.h>

using namespace std;

queue<int> q;

int main(void)
{
	q.push(5);
	q.push(2);
	q.push(3);
	q.push(7);
	q.pop();
	q.push(1);
	q.pop();

	while (!q.empty())
	{
		//3 7 1
		printf("%d", q.front());
		q.pop();

	}


}