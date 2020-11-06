#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll a,b,c,d,x,y,x1,x2,y1,y2;
    cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
    if(x-a+b>=x1 && x-a+b<=x2 && y-c+d<=y2 && y-c+d>=y1 && (x2>x1|| a+b==0) && (y2>y1|| c+d==0))
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
}
return 0;
}