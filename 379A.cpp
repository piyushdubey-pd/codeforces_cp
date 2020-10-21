#include <iostream>
#include <cmath>
using namespace std;
using ll=long long;
int main()
{
    ll x,y,s;
    cin>>x>>y;
    s=x;
    while(x>0)
    {
        s+=x/y;
        x=x/y+x%y;
        if(x<y)
            break;
    }
    cout<<s;

    return 0;
}
