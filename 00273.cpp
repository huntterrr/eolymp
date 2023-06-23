#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
	long long x, n, m, answer;
	cin >> x >> n >> m;
	answer = 1;
	for (int i = 0; i < n; i++)
	{
		answer = (answer * x) % m;
	}
	cout << answer;
}