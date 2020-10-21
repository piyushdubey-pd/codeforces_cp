#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for (int i=0;i<x;i++){
            int n;
            cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
        cin>>arr[j];
    for(int j=n-1;j>=0;j--)
        cout<<arr[j]<<" ";
    cout<<endl;
    }
    return 0;
}
