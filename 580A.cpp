#include <iostream>

using namespace std;

int main()
{
    int x,t=0,m,s=0,ms=0;
    cin>>x;
    for (int i=0;i<x;i++){
            cin>>m;
            if(m<t) {
                s=1;
            }
            else{
                ++s;
                if(s>ms)
                    ms=s;
            }
            t=m;
    }
    cout<<ms;
    return 0;
}
