#include<iostream>
using namespace std;

main(){
	int i,n;
	
	cout<<"Enter any number:";
	cin>>n;
	
	cout<<"Table of "<<n<<":"<<endl<<endl;
	
	for(i=1;i <= 10; i++){
		cout<< n <<"x"<< i << "=" << n*i <<endl; 
	}
}
