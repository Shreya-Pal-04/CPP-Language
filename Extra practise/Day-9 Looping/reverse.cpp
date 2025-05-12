#include<iostream>
using namespace std;

main(){
	int i,rev=0;
	
	cout<<"Enter any number:";
	cin>>i;
	
	while(i != 0){
		rev = rev * 10;
		rev = rev + i % 10;
		i = i / 10;
	} cout<<rev;
}
