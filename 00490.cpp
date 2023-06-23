#include<bits/stdc++.h>
using namespace std;

//10010111

int main() { 
    char arr1[101];
    char arr2[101];
    cin>>arr1;
    for (int i = 0; i < strlen(arr1); i++)
    {
        if (i!=0){
            if (arr1[i-1]==arr1[i])
            {
                cout<<'0';
            }
            else
            {
                cout<<'1';
            }
        }


        else{
            if (arr1[i]=='1'){
                cout<<'1';
            }
            else{
                cout<<'0';
            }
        }
    }
}