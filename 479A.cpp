#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t=0;
    cin>>a>>b>>c;
    if (a==1 && b==1 && c==1)
        t=3;
    else{
        t=max((a+b)*c,t);
        t=max(a*(b+c),t);
        t=max(a+b+c,t);
        int z=t;
        t=max(a*(b+c),(a+b)*c);
        t=max(z,t);
        t=max(a*b*c,t);
    }
    cout<<t;


    return 0;
}
