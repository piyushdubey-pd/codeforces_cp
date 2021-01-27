#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int n;
    cin>>n;
    int sum=(n*(n+1))/2;
    if(n<3)
    {
        cout<<"No";
        exit(0);
    }
    cout<<"Yes"<<endl;
    int temp=(n&1)?((n+1)/2):(n/2);
    cout<<1<<" "<<temp<<endl;
    cout<<n-1<<" ";
    for(int i=1;i<=n;i++)
    {
        if(i==temp)
        continue;
        cout<<i<<" ";
    }
    cout<<endl;
} 