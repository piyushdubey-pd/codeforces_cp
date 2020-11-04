#include <iostream>
#include <bits/stdc++.h>

using ll= long long;
using namespace std;
int count(int n){
    int c=0;
    while(n>0){
        n/=10;
        ++c;
    }
    return c;
}
int sum(int c){
    int s=0;
    for(int i=1;i<=c;i++){
        s+=i;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y=x%10;
        int c=count(x);
        cout<<10*(y-1)+sum(c)<<endl;
    }
    return 0;
}