#include <iostream>

using namespace std;
using ll=long long;
int main()
{
    ll n,x;
    cin>>n>>x;
    if (n%2==0){
        if(x>n/2)
            cout<<(x-(n/2))*2;
        else
            cout<<(2*x)-1;
    }
    else
        if(x>((n/2)+1))
            cout<<(x-((n/2)+1))*2;
        else
            cout<<(2*x)-1;

    return 0;
}
