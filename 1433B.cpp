#include <iostream>
#include <bits/stdc++.h>

using ll=long long;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,m,z=-1;
        cin>>x;
        m=x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
            if (a[i]==1){
                m=min(i,m);
                z=i;
            }
        }
        int c=0;
        if (z>m){
        for(int i=m;i<=z;i++)
            if(a[i]==0)
            ++c;
        cout<<c<<endl;
        }
        else
        cout<<0<<endl;
        
    }
    return 0;
}