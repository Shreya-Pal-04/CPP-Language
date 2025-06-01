#include<iostream>
using namespace std;

int ck(int n);

main(){
	ck(8527);
}
int ck(int n){
	if(n%2==0){
		cout<<n<<" is Even Number";
	}else{
		cout<<n<<" is Odd Number";
	}
}
