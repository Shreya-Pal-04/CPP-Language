#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of columns:";
	cin>>col;
	
	cout<<"Array Input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		} cout<<endl;
	}
	
	cout<<"The Array:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		} cout<<endl;
		
	}
	
	int large=0;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(a[i][j]>large){
				large= a[i][j];
			}
		}
	}
	cout<<endl<<"The Largest element is: "<<large;
}
