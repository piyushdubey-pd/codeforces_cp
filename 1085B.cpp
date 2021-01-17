#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int i=1;
    while(true)
    {
        for(int j=1;j<k;j++)
        if(i*j==n)
        {cout<<i*k+j<<" ";exit(0);}
        i++;
    }
}