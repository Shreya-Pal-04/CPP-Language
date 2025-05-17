#include<iostream>
using namespace std;

main(){
	int i,j;
	
	for(i=1; i<=6; i++){
		for(j=1; j<=5; j++){
			if((j==3 && i>=3)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		} cout<<endl;
	}
}
