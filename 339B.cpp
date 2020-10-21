#include <iostream>

using namespace std;
using ll=long long;
int main()
{
    int n,m; ll x,t=0,s=0;
    cin>>n>>m;
    for (int i=0; i<m; i++){
        cin>>x;
        if(x>t)
            s+=(x-t);
        if (x<t)
            s=s+(n-t)+x;
        t=x;
    }
cout<<s-1;
    return 0;
}
