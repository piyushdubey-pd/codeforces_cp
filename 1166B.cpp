#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<25){
        cout<<-1;
    }
    else{
    bool f=false;
    int i;
    for(i=5;i<n;i++)
    if(n%i==0){
        f=true;
        break;
    }
    if(n/i<5)
    f=false;
    if(f){
        string str="aeiou";
        for(int j=0;j<i;j++){
            for(int k=0;k<n/i;k++){
                cout<<str[(j+k)%5];
            }
        }   
    }
    else
    cout<<-1;    
    }
}