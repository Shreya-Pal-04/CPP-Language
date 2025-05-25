#include<iostream>
using namespace std;

main(){
	int i,j,col,row,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of Columnd:";
	cin>>col;
	cout<<"Array input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}cout<<endl;
	}
	cout<<"The array:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		}cout<<endl;
	}
	cout<<endl<<"Transpose Metrix: "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
				cout<<a[j][i];
		} cout<<endl;
	}
}
