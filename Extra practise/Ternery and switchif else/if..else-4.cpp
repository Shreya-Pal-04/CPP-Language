#include<iostream>
using namespace std;

main(){
	int a,b,c,d;
	
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;	
	cout<<"Enter D:";
	cin>>d;
	
	if(a==b && b==c && c==d && a==c && a==d && b==d){
		cout<<"All are Equal...";
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					cout<<"A is Maximum...";
				}else{
					cout<<"D is MAximum...";
				}
			}else{
				if(c>d){
					cout<<"C is Maximum...";
				}else{
					cout<<"D is Maximum...";
				}
			}
		}else{
			if(b>c){
				if(b>d){
					cout<<"B is Maximum...";
				}else{
					cout<<"D is Maximum...";
				}
			}else{
				if(c>d){
					cout<<"C is Maximum...";
				}else{
					cout<<"D is Maximum...";
				}
			}
		}
	}
}

