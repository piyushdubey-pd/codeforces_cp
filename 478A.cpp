#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    int s=0;
    for(int i=0;i<5;i++){
    int x;
    cin>>x;
    s+=x;
    }
    if(s%5==0 && s!=0)
    cout<<s/5;
    else
    cout<<-1;
    return 0;
}
