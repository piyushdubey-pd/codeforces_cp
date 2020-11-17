#include <vector>
#include <bits/stdc++.h>

using namespace std;
using ll= long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> x(n*k);
        for(int i=0;i<n*k;i++)
            cin>>x[i];
        ll c=0,s=n*k,sum=0;
        while(c!=k){
            s=s-(n/2)-1;
            sum=sum+x[s];
            ++c;
        }
        cout<<sum;
    }
    return 0;
}
