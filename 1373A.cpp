#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<((c<=a)?-1:1)<<" "<<((c>=(b*a))?-1:b)<<endl;
    }
}