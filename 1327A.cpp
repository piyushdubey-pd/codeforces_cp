#include <iostream>
using namespace std;
using ll=long long;
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n>=k*k){
        if (n%2==0 && k%2==0)
        cout<<"YES"<<endl;
        else if(n%2!=0 && k%2!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}