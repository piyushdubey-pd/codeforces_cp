#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool f=true;
    for(int i=0;i<n;i++){
        if(i&1)
        f=false;
        else 
        f=true;
        for(int j=0;j<n;j++)
        {
            if(f){
                cout<<"W";
                f=false;
            }
            else
            {
                cout<<"B";
                f=true;
            }
        }
        cout<<endl;
    }
}