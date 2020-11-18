#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll x,y;
    cin>>x>>y;
    vector<ll> a(x);
    for(ll i=0;i<x;i++)
    cin>>a[i];
    double temp=0,f=0;
    sort(a.begin(),a.end(),greater<double>());
    double s=0;
    for(ll i=0;i<x;i++){
        s+=a[i];
        double f=s/double(i+1);
        if(f>=y)
        temp=i+1;
    }
    cout<<temp<<endl;
    }
    return 0;
}