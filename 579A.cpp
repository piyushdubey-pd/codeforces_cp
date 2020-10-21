#include <iostream>
#include <cmath>
using namespace std;
using ll=long long;
int main()
{
    ll x,t=0;
    cin>>x;
    while(x!=0){
        t=t+x%2;
        x/=2;
    }
        cout<<t;
    return 0;
}
