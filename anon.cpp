#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll dp[10000000];
ll f(ll n)
{
    if (n == 1)
        return 0;
    if (dp[n]!=-1)
        return dp[n];
    else
    {
        ll p1 = (ll)floor(n/2.0);
        ll p2 = (ll)ceil(n/2.0);
        return dp[n]=(f(p1)+f(p2)+p1*p2);
    }
}
int main() {
    ll t;
    cin >> t;
    for (int i=1;i<10000000;i++)
          dp[i]=-1;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << f(n) << endl;
    }
    return 0;
}
