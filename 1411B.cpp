#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;
using ll=long long;

bool fair(ll s){
    ll h=s;
    while(h){
        int temp=h%10;
        if(temp>1 && s%temp!=0)
        return false;
        h/=10;
}
return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(!fair(n)) n++;
        cout<<n<<endl;
    }
    return 0;
}