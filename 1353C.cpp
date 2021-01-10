#include<bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        n/=2;
        cout<<(4*((n*(n+1)*(2*n+1))/3))<<endl;
    }
}