#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,s=0,c=0;
        string str;
        cin>>x>>str;
        for(int i=0;i<x;i++){
            if(str[i]=='(')
            s+=1;
            else
            s-=1;
            if(s<0){
            c++;
            s=0;
            }
        }
    cout<<c<<endl;
    }
    return 0;
}