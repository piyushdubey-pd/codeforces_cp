#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int x[m],y[n];
        for(int i=0;i<m;i++)
        cin>>x[i];
        for(int i=0;i<n;i++)
        cin>>y[i];
        int s=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            if(x[i]==y[j])
            s++;
        }
        cout<<s<<endl;
    }
    return 0;
}