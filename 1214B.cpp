#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(b,c)-(c-min(a,c))+1<<endl;
}