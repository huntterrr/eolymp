#include <bits/stdc++.h>
using namespace std;


int f(int x, int y, int z){
    int minimum = min({x, y, z});
    int maximum = max({x, y, z});
    if (x>minimum and x<maximum){
        return x;
    } else if(y>minimum and y<maximum){
        return y;
    }
    return z;
}

int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    cout<<f(x, y, z);
}