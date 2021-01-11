#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        b=b+1;
        string str=to_string(b);
        ll res=a*(ll(str.length())-1);
        cout<<res<<endl;
    }
}