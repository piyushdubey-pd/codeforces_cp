#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll &i:a)
    cin>>i;
    sort(a,a+n);
    if(a[n-3]+a[n-2] <=a[n-1])
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" ";
        for(int i=n-3;i>=0;i-- )cout<<a[i]<<" ";
        cout<<a[n-2]<<endl;
    }
}
