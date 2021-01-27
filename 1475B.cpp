#include <bits/stdc++.h> 
using namespace std; 
using ll=long long;
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int r=n%2020;
        n-=r*2021;
        if(n%2020==0 && n>=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    }