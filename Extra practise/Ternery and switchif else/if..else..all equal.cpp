#include<iostream>
using namespace std;

main(){
	int a,b,c;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;
	
	if(a==b && b==c && a==c){
		cout<<"All are Equal...";
	}
	else{
		if(a>b){
			if(a>c){
				cout<<"A is Maximum...";
			}else{
				cout<<"C is Maximum...";
			}	
		}
		else{
			if(b>c){
				cout<<"B is Maximum...";
			}else{
				cout<<"C is Maximum...";
			}
		}
	}
}
