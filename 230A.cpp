#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s,n,f=1;
    cin>>s>>n;
    pair<int, int> pairt[n];
    for(int i=0;i<n;i++){
            int x,y;
    cin>>x>>y;
    pairt[i].first=x;
    pairt[i].second=y;
    }
    sort(pairt,pairt+n);
    for (int i=0;i<n;i++){
        if(pairt[i].first<s){
            s+=pairt[i].second;
        }
        else{
            f=0;
            break;
        }
        }

    if(f==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
