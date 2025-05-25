#include<iostream>
using namespace std;

main(){
	int i,j,row,col, a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of columns:";
	cin>>col;
	
	cout<<"Array input"<<endl;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cin>>a[i][j];
		}
	}
	cout<<"The array "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		} cout<<endl;
	}
	int r,rsum=0;
	cout<<"Enter the number of row you want to sum:";
	cin>>r;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(r==i){
				cout<<a[i][j]<<endl;
				rsum+=a[i][j];
			}
		}cout<<endl;
	}
	cout<<"The row sum is "<<rsum;
}
