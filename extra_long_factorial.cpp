#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[200],j,size,c,p,t;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    a[0]=1;
    size=1;
    for(int i=2;i<=n;i++)
        {
        p=size;c=0;
        for(j=0;j<size;j++)
            {
                t=a[j]*i+c;
                c=t/10;
                a[j]=t%10;
        }
    while(c)
        {
            a[j]=c%10;
            size++;
        j++;
            c=c/10;
    }
}
for(int i=size-1;i>=0;i--)
    {
    cout<<a[i];
}
          return 0; 
          }
