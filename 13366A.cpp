#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x==0 || y==0)
        cout<<0<<endl;
        else if(x>=2*y)
        cout<<y<<endl;
        else if(y>=2*x)
        cout<<x<<endl;
        else
        cout<<(x+y)/3<<endl;
    }
    return 0;
}
