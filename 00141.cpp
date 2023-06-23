#include <bits/stdc++.h>
using namespace std;

int numSum(long long x){
    long long count = 0;
    while (x>0)
    {
        count+=x%10;
        x/=10;
    }
    return count;
    
}


int main()
{
    long long m, n;
    cin>>m>>n;
    int count = 0;
    long long answer = 10000000;
    for (long long i = m; i <= n; i++)
    {
        if(numSum(i)<answer){
            count = 1;
            answer = numSum(i);
        }
        else if (numSum(i)==answer)
        {
            count+=1;
        }
    }
    cout<<count;
}