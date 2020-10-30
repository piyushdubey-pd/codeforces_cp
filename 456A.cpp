#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    pair<ll,ll> z[t];
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        z[i].first=x;
        z[i].second=y;
    }
    sort(z,z+t);
    int f=0;
    for (ll i=1;i<t;i++){
        if(z[i-1].second>z[i].second){
            f=1;
            break;
        }
    }
    if (f==1)
    cout<<"Happy Alex";
    else
    cout<<"Poor Alex";
    return 0;
}
