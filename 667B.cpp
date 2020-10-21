#include <iostream>
#include <math.h>

using namespace std;
using ll=long long;

int main()
{
    int x;
    cin>>x;
    for (int i=0;i<x;i++){
        int a,b;
        cin>>a>>b;
        cout<<int(ceil(float(abs(a-b))/10.0))<<endl;
    }
    return 0;
}
