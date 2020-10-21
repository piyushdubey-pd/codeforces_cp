#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> vect;
    for(int j=0;j<4;j++){
        int s=0;
        for(int i=0;i<n;i++){
            if(a[i]==j+1)
            s++; 
        }
        vect.push_back(s);
    }
    if (vect[0]-vect[2]>0)
    {
    vect[0] = vect[0] - vect[2];
    } 
    else {
        vect[0]=0;
    }
    if (vect[1]%2==1 && vect[0]>0){
        if (vect[0]>1){
            vect[0]=vect[0]-2;
        } 
        else 
        {
            vect[0]--;
        }
    }
    int z = vect[3] + vect[2] +(vect[1]/2)+(vect[1]%2)+(vect[0]/4);
    if(vect[0]%4!=0)
    z++;
    cout << z;
    return 0;
}