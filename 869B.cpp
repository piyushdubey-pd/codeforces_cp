#include <iostream>

using namespace std;
using ll=long long;

int main(){
    ll x,y,p=1;
    cin>>x>>y; 
    if(y-x>=10)
    cout<<0;
    else{
    for (ll i=x+1;i<=y;i++)
    p*=(i%10);
    cout<<p%10<<endl;
    }
    return 0;
}
