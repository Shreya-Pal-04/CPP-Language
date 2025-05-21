#include<iostream>
using namespace std;

main(){
	int row,col,i,j,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of Columns:";
	cin>>col;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>a[i][j];
		} 
	
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		} 
		cout<<endl;
	}
}
