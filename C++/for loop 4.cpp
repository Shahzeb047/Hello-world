//Print numbers between 100 and 200 divisible by 7.
#include<iostream>
using namespace std;
int main (){
	for(int i=100; i<=200; i++){
		if(i%7==0){
			cout<<i<<endl;
		}
	}
return 0;
}
