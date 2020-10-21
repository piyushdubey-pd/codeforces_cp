#include <iostream>

using namespace std;

int main()
{
    int n,m,x,s=0,f=0;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n-1;i++)
        cin>>a[i];
    for (int i=1;i<n;){
        if(i==m){
            f=1;
            break;
        }
        if (i>m)
            break;
    i=i+a[i-1];
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
