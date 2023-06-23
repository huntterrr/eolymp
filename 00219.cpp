#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a>> b>> c>>d;
    long long v = a * b * c;
    cout<<setprecision(20) << ceil((long double)v / d);
}