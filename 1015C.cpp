#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,m,sum=0,sumc=0,t,t1;
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++){
    cin>>t>>t1;
    sum+=t;
    sumc+=t1;
    arr[i]=t-t1;
    }
    if(sumc>m)
    cout<<-1<<endl;
    else{
        sort(arr,arr+n);
        ll c=0,temp=n-1;
        while(sum>m && temp>=0){
            sum=sum-arr[temp--];
            c++;
        }
        cout<<c;
    }
}