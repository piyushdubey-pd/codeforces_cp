#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
ll a,b;
cin>>a>>b;
while(a!=0 && b!=0){
    if(a>=2*b)
    a%=2*b;
    else if(b>=2*a)
    b%=2*a;
    else
    break;
}
cout<<a<<" "<<b;
}