#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,s1=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
            if(a[i]==1)
            ++s1;
        int s0=n-s1;
        if (s1<=n/2){
            cout<<s0<<endl;
            for(int i=0;i<s0;i++)
            cout<<"0 ";
        }
        else{
            cout<<s1-(s1%2)<<endl;
            for(int i=0;i<s1-(s1%2);i++)
            cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}
