#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    if(a[0]+a[1]>d)
    {
        bool flag=true;
        for(int i=0;i<n;i++)
        if(a[i]>d)
        {flag=false;break;}
        if(flag)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}
}