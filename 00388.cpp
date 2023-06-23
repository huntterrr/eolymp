#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	long long n, res;
	cin >> n;
	res = 0;
	while (n != 1) {
		if (n%2==1)
		{
			n += 1;
		}
		else {
			n /= 2;
		}
		res += 1;
	}
	cout << res;
}