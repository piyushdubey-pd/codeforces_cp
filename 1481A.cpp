#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    string str;
    cin>>str;
    int arr[4]={0,0,0,0};
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='U')
        arr[0]++;
        if(str[i]=='D')
        arr[1]++;
        if(str[i]=='R')
        arr[2]++;
        if(str[i]=='L')
        arr[3]++;
    }

    if(x>=0 && y>=0)
    {
        if(arr[0]<y || arr[2]<x)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if(x<0 && y<0)
    {
        if(arr[1]<abs(y) || arr[3]<abs(x))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if(x<0)
    {
        if(arr[3]<abs(x) || arr[0]<y)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else
    {
        if(arr[2]<x || arr[1]<abs(y))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    }	
}