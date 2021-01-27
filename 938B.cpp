#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ls=-1,nx=-1,f=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=500000)
        ls=arr[i];
        if(arr[i]>=500001 && f)
        {
            f=0;
            nx=arr[i];
        }
    }
    if(nx==-1)
    cout<<ls-1;
    else if (ls==-1)
    cout<<1000000-nx;
    else
    cout<<max(ls-1,1000000-nx);
}