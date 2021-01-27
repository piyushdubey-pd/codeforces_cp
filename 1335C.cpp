#include <bits/stdc++.h> 
using namespace std; 
using ll=long long;
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int &i: arr)
    cin>>i;
    sort(arr,arr+n);
    int prev=arr[0],s=1,d=0,mx=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
        {
            d++;
            mx=max(mx,s);
            s=1;
        }
        else
        s++;
    }
    mx=max(s,mx);
    cout<<mx<<" "<<d<<endl;
    if(mx<d){
        cout<<mx<<endl;
    }
    else if(mx-d==1){
        cout<<mx-1<<endl;
    }
    else if(mx-d>1){
        cout<<d+1<<endl;
    }
    else{
        cout<<mx<<endl;
    }
}
}