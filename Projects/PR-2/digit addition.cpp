#include<iostream>
using namespace std;

main(){
	int num,last_num;
	
	cout<<"Enter any number:";
	cin>>num;
	
	last_num= num % 10;
	
	while(num >= 10){
		num = num / 10;
	}
	cout<<"The sum of first and last digit: "<< num+last_num;
}
