#include <iostream>

using namespace std;

int main()
{
    int m,n,c=0;
    cin>>m>>n;
    while (m!=0 && n!=0){
        m--;
        n--;
        c++;
    }
    if(c%2==0)
        cout<<"Malvika";
    else
        cout<<"Akshat";


}
