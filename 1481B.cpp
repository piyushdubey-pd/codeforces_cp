#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int &i:arr)
        cin>>i;
        int retval;
        bool f;
        while(k>0){
            f=false;
            for(int i=1;i<n;i++){
                    if((arr[i]-arr[i-1])>k){
                        cout<<i<<endl;
                        f=false;
                        goto st;
                    }
                    else{
                    f=true;
                    k-=(arr[i]-arr[i-1]);
                    arr[i-1]=arr[i];
                    retval=i;
                    break;
                    }
                }
                if(f==false)
                {
                    cout<<-1<<endl;
                    k=-1;
                }
        }
        st:
        if(f)
        cout<<retval<<endl;
    }
}