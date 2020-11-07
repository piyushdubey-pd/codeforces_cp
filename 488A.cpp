#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool luck(ll n){
string s=to_string(n);
if(s.find('8')<s.size())
return true;
return false;
}

int main(){
    ll x,c=1;
    cin>>x;
    while(true){
        if(luck(x+c)){
        cout<<c;
        break;
        }
        c++;
    }
    return 0;
}