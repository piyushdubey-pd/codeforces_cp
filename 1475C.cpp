#include <bits/stdc++.h> 
using namespace std; 
using ll=long long;
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int a,b,k,s=0;
        cin>>a>>b>>k;
        int boy[k],grl[k];
        for(int i=0;i<k;i++)
        cin>>boy[i];
        for(int i=0;i<k;i++)
        cin>>grl[i];
        for(int i=0;i<k-1;i++){
            for(int j=i+1;j<k;j++){
                if(boy[i]!=boy[j] && grl[i]!=grl[j])
                s++;
            }
        }
        cout<<s<<endl;
    }
}