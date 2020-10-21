#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int x,f=0,f1=1;
    if (s[0]>='A' && s[0]<='Z')
        f=1;
    for (int i=1;i<s.size();i++){
        if (s[i]>='a'&& s[i]<='z'){
            f1=0;
            break;
        }
    }
    if(f==1 && f1==0)
        cout<<s;
    if(f==1 && f1==1){
        for(int i=0;i<s.size();i++)
            cout<<char(s[i]+32);
    }
    if(f==0 && f1==0){
            cout<<s[0];
        for(int i=1;i<s.size();i++)
            cout<<char(s[i]);
    }
    if(f==0 && f1==1){
        cout<<char(s[0]-32);
        for (int i=1;i<s.size();i++)
            cout<<char(s[i]+32);
    }
    return 0;
}
