#include<bits/stdc++.h>
using namespace std;

int main(){
    double d,sum=0.0;
    cin>>d;
    for(double i=1.0;i<=d;i++)
    sum+=1.0/i;
    cout<<fixed<<setprecision(12)<<sum;
}