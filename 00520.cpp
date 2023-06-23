#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	long long n, res;
	res = 0;
	while (cin>>n){
		res += n;
	}
	cout << res;
}