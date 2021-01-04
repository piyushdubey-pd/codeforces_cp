#include <bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int m,n,c=0,sum=0,min=INT_MAX;
    cin>>m>>n;
    for(int i=0;i<m*n;i++){
        int temp;
        cin>>temp;
        if(temp<=0)
        ++c;
        sum+=abs(temp);
        if(abs(temp)<min)
        min=abs(temp);
    }
    if(c%2==0)
    cout<<sum<<endl;
    else
    {
        cout<<(sum-(2*min))<<endl;
    }
}
}
