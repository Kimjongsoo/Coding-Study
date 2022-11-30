#include <bits/stdc++.h>

using namespace std;

stack<int> s;

int main(void)
{
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	
	while (!s.empty())
	{
		printf("%d", s.top());
		//cout << s.top();
	}

}