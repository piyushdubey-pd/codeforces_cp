#include <vector>
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c0,c1,k;
        string str;
        cin>>n>>c0>>c1>>k>>str;
        ll ze=0,on=0;
        for(ll i=0;i<n;i++){
            if(str[i]=='0')
            ze++;
        }
        on=n-ze;
        ll mi=min(((c0*ze)+(c1*on)),min(((n*c0)+(on*k)),((n*c1)+(ze*k))));
        cout<<mi<<endl;
}
return 0;
}