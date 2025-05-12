#include<iostream>
using namespace std;

main(){
	int i,j,s;
	
	for(i=1; i<=5; i++){
		for(s=i; s<=4; s++){
			cout<<" ";
		}
		for(j=1; j<=i; j++){
			cout<< "*" ;
		} cout<<endl;
	}
}
