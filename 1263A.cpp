#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin >> t;   
        int a[3];
        while(t--){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] <= a[0] + a[1])
            cout << (a[0] + a[1] + a[2]) / 2 << endl;
        else
            cout << a[0] + a[1] << endl;
}
}