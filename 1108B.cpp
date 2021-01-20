#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &i:arr)
    cin>>i;
    sort(arr,arr+n);
    int prev,max=arr[n-1];
    for(int j=0;j<n;j++)
        if(arr[n-1]%arr[j]==0 && prev!=arr[j])
        {
            prev=arr[j];
            arr[j]=INT_MAX;
        }
    for(int i=n-1;i>=0;i--)
    if(arr[i]!=INT_MAX)
    {prev=arr[i];break;}
    cout<<max<<" "<<prev<<endl;
}
