#include <iostream>
#include <cmath>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a, b, x, y, s1=0,s2=0;
        cin>>x>>y>>a>>b;
        s1=x*a+y*a;
        s2=abs(x-y)*a+min(x,y)*b;
        cout<<min(s1,s2)<<endl;
    }
    return 0;
}
