#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,p;
        cin>>n>>k>>p;
        ll s=p;
        ll ans=0;
        for (int i=1;i<n;i++){
            ll temp;
            cin>>temp;
            if(temp*100>=s*k)
            {
                ans=ans+((temp*100)-(s*k));
                s=s+ans;
            }
            s=s+temp;
        }
    cout<<ans<<endl;
    } 
}