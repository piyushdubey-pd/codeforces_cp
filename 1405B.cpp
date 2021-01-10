#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f;
        cin>>n;
        ll sum=0,sum1=0;
        while(n--)
        {
            cin>>f;
            if(f>0)
            sum+=f;
            if(f<0){
            if(abs(f)<=sum){
                sum+=f;
                f=0;
            }
            else if(sum>0)
            {
                f+=sum;
                sum=0;
            }
            sum1+=abs(f);
        }
        }
        cout<<sum1<<endl;
    }
    return 0;
}