#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(arr[i]>=0 && arr[i+1]>=0)
                {
                    if(arr[i+1]<arr[i])
                    arr[i]=arr[i]*-1;
                }
                else if(arr[i]>=0 && arr[i+1]<0)
                {
                    if(arr[i]>(arr[i+1]*-1))
                    arr[i]*=-1;
                    else
                    arr[i+1]*=-1;
                    
                }
                else if(arr[i]<0 && arr[i+1]<=0)
                {
                    if(arr[i]>arr[i+1])
                    arr[i+1]*=-1;                    
                }
            }
            else{
                if(arr[i]>=0 && arr[i+1]>=0)
                {
                    if(arr[i+1]>arr[i])
                    arr[i+1]=arr[i+1]*-1;
                }
                else if(arr[i]<=0 && arr[i+1]>0)
                {
                    if(arr[i+1]>(arr[i]*-1))
                    arr[i+1]*=-1;
                    else
                    arr[i]*=-1;
                    
                }
                else if(arr[i]<0 && arr[i+1]<=0)
                {
                    if(arr[i]<arr[i+1])
                    arr[i]*=-1;                    
                }
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}