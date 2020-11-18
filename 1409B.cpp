#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll pdt(ll x,ll y,ll a,ll b,ll n)
{
	 ll temp = min(n,x-a) ;
        n-=temp;
        x-=temp;
        temp=min(n,y-b) ;
        y-=temp;
        return x*y;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y,a,b,n;
        cin>>x>>y>>a>>b>>n;
        cout<<min(pdt(x,y,a,b,n),pdt(y,x,b,a,n))<<endl;
    }
    return 0;
}