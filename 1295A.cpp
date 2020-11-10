#include <bits/stdc++.h>

using namespace std;

int segs(int n){
    int a[]={6,2,5,5,4,5,6,3,7,6};
    int s=0;
    while(n>0){
        s+=a[n%10];
        n/=10;
    }
    return s;
}

int main(){
    int m,t;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        for(int i=2;i<100000;i++){
            if(segs(i)<=x)
            t=i;
        }
    cout<<t<<endl;
    }
    return 0;
}
