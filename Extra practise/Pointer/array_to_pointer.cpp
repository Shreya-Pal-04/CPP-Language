#include<iostream>
using namespace std;

main(){
	int a=1,b=2,c=3;
	int *ar[3];
	
	ar[0] = &a;
	ar[1] = &b;
	ar[2] = &c;
	
	for(int i=0; i<3; i++){
		cout<<*ar[i]<<" ";
	}
}
