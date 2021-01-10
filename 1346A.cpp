#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll z=ceil(double(n)/double(1+k+pow(k,2)+pow(k,3)));
        cout<<z<<" "<<z*k<<" "<<z*k*k<<" "<<z*k*k*k<<endl;
    }
}