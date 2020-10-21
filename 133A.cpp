#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if (regex_match(s, regex("(.*)[HQ9](.*)")))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
