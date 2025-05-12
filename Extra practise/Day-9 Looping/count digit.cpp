#include<iostream>
using namespace std;

main(){
	int n,count=0;
	
	cout<<"Enter any number:";
	cin>>n;
	
	while(n > 0){
		n=n/10;
		count++;
	} cout<<"Total digits of the number:"<<count;
} 
