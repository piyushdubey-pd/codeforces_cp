#include <iostream>

using namespace std;
using ll=long long;
int main()
{
    ll n,x,s=0;
    cin>>n>>x;
    for (int i=1;i<=n;i++)
        if(x%i==0 && (x/i)<=n)
        s++;
    cout<<s;
    return 0;
}
