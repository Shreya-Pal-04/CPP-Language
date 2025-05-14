#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e;
		
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	cout<<"Enter C:";
	cin>>c;	
	cout<<"Enter D:";
	cin>>d;
	cout<<"Enter E:";
	cin>>e;
	
	if(a==b && b==c && c==d && d==e && a==c && a==d && a==e && b==d && b==e && c==e){
		cout<<"All are Equal...";
	}
	else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						cout<<"A is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}
			}else{
				if(c>d){
					if(c>e){
						cout<<"C is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}
			}
		}else{
			if(b>c){
				if(b>d){
					if(b>e){
						cout<<"B is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}
			}else{
				if(c>d){
					if(c>e){
						cout<<"C is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}else{
					if(d>e){
						cout<<"D is Maximum...";
					}else{
						cout<<"E is Maximum...";
					}
				}
			}
		}
	}
}
