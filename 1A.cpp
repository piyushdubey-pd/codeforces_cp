#include <iostream>
#include <cmath>
using namespace std;
using ll=long long;
int main()
{
    double m,n,a;ll x,y;
    cin>>m>>n>>a;
    x=ceil(m/a);
    y=ceil(n/a);
    cout<<x*y;
    return 0;
}
