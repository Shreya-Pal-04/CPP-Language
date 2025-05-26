#include<iostream>
using namespace std;

main(){
	int i,j,col,row,a[50][50],b[50][50],sub[i][j];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of Columnd:";
	cin>>col;
	cout<<"First Array input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}cout<<endl;
	}
	cout<<endl;
	cout<<"Second Array input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>b[i][j];
		}cout<<endl;
	}
	cout<<"First array:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		}cout<<endl;
	}
	cout<<endl;
	cout<<"Second array:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<b[i][j];
		}cout<<endl;
	}	
	cout<<"Subtract of two metrix:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			sub[i][j] = a[i][j] - b[i][j];
			cout<<sub[i][j];
		} cout<<endl;
	}
}
