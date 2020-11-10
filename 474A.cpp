#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char ch;
    cin>>ch;
    string s;
    if(ch=='R'){
        cin>>s;
        for(int i=0;i<s.size();i++){
            cout<<char(vec[find(vec.begin(), vec.end(),s.at(i)) - vec.begin() -1]);
        }
    }
    if(ch=='L'){
        cin>>s;
        for(int i=0;i<s.size();i++){
            cout<<char(vec[find(vec.begin(), vec.end(),s.at(i)) - vec.begin() +1]);
        }
    }
    return 0;
}
