#include <iostream>

using namespace std;

int Luck(int x){
int f=1;
while(x!=0){
    if(x%10 !=4 && x%10!=7){
        f=0;
    break;
    }
    x/=10;
    }
return f;
}
int main()
{
int c,f=0;
cin>>c;
for (int i=4;i<=c;i++){
    if(Luck(i)==1)
    if(c%i==0){
        f=1;
        break;
    }
    }
if(f==1)
    cout<<"YES";
else
cout<<"NO";

    return 0;
}
