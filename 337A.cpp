#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    int min=a[m-1];
    for (int i=0;i<=m-n;i++)
            if((a[i+n-1]-a[i])<min) min=a[i+n-1]-a[i];
    cout<<min;
    return 0;
}
