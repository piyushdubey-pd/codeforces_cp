#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,f=-1;
        cin>>x;
        ll a[x];
        cin>>a[0];
        for(ll i=1;i<x;i++){
            cin>>a[i];
            if (a[i]!=a[0])
            f=0;
        }
        if(f!=-1){
        int max=a[0];
        for(ll i=0;i<x;i++){
            if(a[i]>=max){
            max=a[i];
            if ((i==0 && a[i+1]<a[i]) || (i==x-1 && a[i-1]<a[i]) || (a[i]>a[i-1] || a[i]>a[i+1]))
            f=i+1;
            }
        }
        }
        cout<<f<<endl;
        }
    return 0;
}