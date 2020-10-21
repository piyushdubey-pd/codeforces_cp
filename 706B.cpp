#include <iostream>
#include <vector>
using namespace std;
// using ll=long long;

int main(){
    int t,m;
    cin>>t;
    vector <int> x;
    while(t--){
        cin>>m;
        x.push_back(m);
    }
    cin>>t;
    while(t--){
        int c=0;
        cin>>m;
        for(int i=0;i<x.size();i++){
            if(x[i]<=m)
            c++;
        }
        cout<<c;
    }
    return 0;
}