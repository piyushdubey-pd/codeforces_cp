#include <bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
using ll=long long;
int main(){
int t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll sum=accumulate(arr.begin(),arr.end(),0);
    ll i=0;
    vector<ll> arr1(n);
    for(ll i=0;i<n;i++)
    arr1[i]=arr[i];
    while(arr1[i]%x==0){
            sum+=arr[i];
            arr1[i]=arr1[i]/x;
            i=(i+1)%n;
    }
    cout<<sum<<endl;
}
return 0;
}