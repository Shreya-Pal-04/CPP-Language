#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of columns:";
	cin>>col;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>a[i][j];
		}
	} cout<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(i+j==col-1){
				cout<<a[i][j];
			}else{
				cout<<" ";
			}
			
		} cout<<endl;
	}
}
