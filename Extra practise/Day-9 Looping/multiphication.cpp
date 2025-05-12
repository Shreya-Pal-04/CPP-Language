#include<iostream>
using namespace std;

main(){
	int n,i,mul=1;
	
	cout<<"Enter any number:";
	cin>>n;
	
	for(i=1; i<=n; i++){
		mul *= n*i;
	}
	cout<<mul;
}
