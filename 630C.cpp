#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    ll s=0;
    for(int i=1;i<=n;i++){
        s+=pow(2,i);
    }
    cout<<s;
}