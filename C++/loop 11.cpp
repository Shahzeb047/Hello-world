//11.Print all numbers ending with digit 5 between 1 and N.

#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter the value of n";
	cin>>n;
	for(int i=1; i<=n; i++){
		if(i%10==5){
			cout<<i<<endl;
		}
	}
	return 0;
}
