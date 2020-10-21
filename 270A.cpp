#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x--){
        int m;
        cin>>m;
        if (360%(180-m)==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}