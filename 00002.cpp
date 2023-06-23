#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    long long n, res;
    res = 0;
    cin >> n;
    if (n==0)
    {
        res++;
    }
    else {
        while (n>0)
        {
            n /= 10;
            res++;
        }
    }
    cout << res;
}