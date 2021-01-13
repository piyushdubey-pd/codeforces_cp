#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string str;ll n,x,y,sum=0;
    cin>>n>>x>>y;
    cin>>str;
    reverse(str.begin(),str.end());
    for(ll i=0;i<x;i++)
        if((str[i]=='0' && i==y) || (str[i]=='1' && i!=y))
        sum++;
    cout<<sum<<endl;
}