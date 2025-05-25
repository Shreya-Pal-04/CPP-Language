#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of columns:";
	cin>>col;
	
	cout<<"Array input"<<endl;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		} cout<<endl;
	}
	cout<<"The Array"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		}cout<<endl;
	}
	int c,csum=0;
	cout<<"Enter the number of column you want to sum:";
	cin>>c;
	for(i=0; i<row; i++){
		for(j=0; j<row; j++){
			if(c==j){
				cout<<a[i][j];
				csum+=a[i][j];
			}
		}
	}
	cout<<"The column sum is: "<<csum;
}
