#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>arr[i][j];
    int sum=0;
    bool f=true;
    for (int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(arr[i][j]==0)
                arr[i][j]=min(arr[i+1][j],arr[i][j+1])-1;
            if((j<m-1 && arr[i][j]>=arr[i][j+1]) || (i<n-1 && arr[i][j]>=arr[i+1][j])){
                f=false;
                break;
            } 
        }
    }
    if(f){
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        sum+=arr[i][j];
        cout<<sum<<endl;
    }
    else
    cout<<-1<<endl;
}