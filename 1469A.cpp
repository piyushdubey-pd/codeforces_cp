#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool f=true;
        string s;
        cin>>s;
        int temp=0,count=0;
        for(char ch: s){
            if(ch=='(')
            ++temp;
            if(ch==')')
            --temp;
            if (ch=='?' && !count)
            {++temp;++count;}
            if (ch=='?' && count)
            {--temp;--count;}
            if(temp<0)
            f=false;
        }
        if(temp!=0)
        f=false;
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}