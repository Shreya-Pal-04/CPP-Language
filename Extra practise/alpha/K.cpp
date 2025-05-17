#include<iostream>
using namespace std;

main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=4;j++){
			if(j==1 || i+j==5 ||i-j==1){
			
				cout<<" * ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
