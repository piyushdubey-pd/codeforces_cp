#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	int n;
    cin>>n;
	vector<string> s={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	if(n>5){
		int t;
		for (int i=1;i*5<n;i=i*2)
		{n-=i*5; t=i;}
	cout<<s[(n-1)/(t*2)]<<endl;	
	}
	else
	cout<<s[n-1];
	return 0;
}