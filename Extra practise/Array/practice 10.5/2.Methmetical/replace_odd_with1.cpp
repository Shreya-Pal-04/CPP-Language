#include<iostream>
using namespace std;

main(){
	int i,j,col,row,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of Columnd:";
	cin>>col;
	cout<<" Array input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}cout<<endl;
	}
	cout<<endl;
	cout<<"The array:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
	cout<<"Replace odd number with 1:";
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(a[i][j] % 2 != 0){
				a[i][j] = 1;
			}
		}
	}cout<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		}cout<<endl;
	}
}
