#include<iostream>
using namespace std;

main(){
	int n,r,rev=0,o;
	
	cout<<"Enter any number:";
	cin>>n;
	
	while(n>0){
		r = n%10;
		rev = (rev*10)+r;
		n = n/10;
	}
	o=n;
	if(rev==o){
		cout<<"This number is Palindron Number.";
	}
	else{
		cout<<"This number is not Palindron Number.";
	}
}
