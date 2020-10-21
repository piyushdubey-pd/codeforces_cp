#include <iostream>

using namespace std;
using ll=long long;
int main()
{
    ll x;
    cin>>x;
    for (int i=0;i<x;i++){
        int n;
        cin>>n;
        ll a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for (int j=1;j<n;j++){
            if(a[j-1]>=0){
            a[j]+=a[j-1];
            a[j-1];
        }
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
