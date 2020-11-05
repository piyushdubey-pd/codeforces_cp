#include <bits/stdc++.h>

using namespace std;
using ll=long long;

ll fact(ll n){
    ll p=1;
    while (n>0)
        p*=n--;
    return p;
}
int main(){
    ll t,p=1,c=1;
    cin>>t;
    cout<< ll(fact(t)/(pow(t/2,2)*2))<<endl;
    return 0;
}
