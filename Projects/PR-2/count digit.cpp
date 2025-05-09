#include<iostream>
using namespace std;

main(){
	int num,cnt=0;
	
	cout<<"Enter any number:";
	cin>>num;
	
	while(num>0){
		num = num / 10;
		cnt++;
	}
	cout<<endl<<"Total number of the digit: "<<cnt;
}
