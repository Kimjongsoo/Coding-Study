#include <bits/stdc++.h>

using namespace std;

int d[100];
int n;
vector<int> arr;

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	// 다이나믹 프로그래밍 (Dynamic Programming) 진행
	d[0] = arr[0];
	d[1] = max(arr[0], arr[1]);
	for (int i = 2; i < n; i++)
	{
		d[i] = max(d[i - 1], d[i - 2] + arr[i]));
	}
	cout << d[n - 1] << '\n';

	return 0;

}