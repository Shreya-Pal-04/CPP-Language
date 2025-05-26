#include<iostream>
using namespace std;

int age();
main(){
	
	if(age()==1){
		cout<<"You can vote";
	}else{
		cout<<"You can't vote";
	}
}
int age(){
	int n;
	cout<<"Enter your age: ";
	cin>>n;
	
	if(n>=18){
		return 1;
	}else{
		return 2;
	}
}
