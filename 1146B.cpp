#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!='a')
        s+=str[i];
    }
    string s1,s2;
    s1=s.substr(0,(s.size()/2));
    s2=s.substr(s.size()/2);
    if(s1.compare(s2)==0){
        int i=s1.size()-1,j=str.size()-1;
        while(i>=0){
            if(s[i]==str[j])
            str[j]=' ';
            else{
                cout<<":("<<endl;
                exit(0);
            }
            i--;
            j--;
        }
        cout<<str<<endl;
    }
    else
        cout<<":("<<endl;
    }