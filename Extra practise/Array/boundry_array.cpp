#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[i][j];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of columns:";
	cin>>col;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>a[i][j];
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(/*i==1 || j==1 */ i==row-1 || j==col-1){
				cout<<a[i][j];
			}
		} cout<<endl;
	}
}
