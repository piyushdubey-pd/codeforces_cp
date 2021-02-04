#include <bits/stdc++.h>

using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%2==0)
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    int s=0;
    int i=arr.size()-1;
    while(i>=0){
        while(arr[i]%2!=0)
        --i;
        int ind=i;
        int k=arr[i];
        int f=0;
        if(i<0)
        {
            cout<<s<<endl;
            return;
        }
        while(arr[i]==k){
            arr[i]/=2;
            --i;
        }
        // if(arr[i]%2!=0)
        // i--;
        // else
        i=ind;
        s++;
    }
    cout<<0<<endl;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    //     cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }	
}