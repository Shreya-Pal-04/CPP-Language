#include<iostream>
using namespace std;

main(){
	 int i,j;
	 
	 for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			if(j==1 || (j==7 && i<5) || i==1 || i==4 || (i==1 || i==5 && j==4)) {
				cout<<"*"<<" ";
			}else{
				cout<<" "<<" ";
			}
		}cout<<endl;
	}
}
