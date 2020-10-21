#include <iostream>
using namespace std;
using ll=long long;
 
int main()
{
    ll t,n,i,j,f=0,c1,c2;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        ll a[n], b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        c1=0;c2=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=-1;
                if(b[i]>a[i] && c1==1)
                {
                    f=0;
                }
                if(b[i]<a[i] && c2==1)
                {
                    f=0;
                }
            }
            if(f==-1)
            break;
            if(a[i]==b[i])
            f=0;
            if(a[i]==1)
            c1=1;
            else if(a[i]==-1)
            c2=1;
        }
        if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}