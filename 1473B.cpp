#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
int t;
cin>>t;
while(t--){
    string a,b;
    cin>>a>>b;
    if(a.size()==b.size()){
        if(a.compare(b)==0)
        cout<<a<<endl;
        else cout<<-1<<endl;
    }
    else{
    int m=a.size(),n=b.size();
    int LCM=lcm(m,n);
    string tmp=a,tmp1=b;
    for(int i=1;i<(LCM/m);i++)
    a=a+tmp;
    for(int i=1;i<(LCM/n);i++)
    b=b+tmp1;
    if(a.compare(b)==0)
    cout<<a<<endl;
    else
    cout<<-1<<endl;
    }
}
}