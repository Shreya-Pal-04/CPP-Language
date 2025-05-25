#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[50][50],sum=0;
	
	cout<<"Enter the number of rows:";
	cin>>row;
	
	cout<<"Enter the number of columns:";
	cin>>col;
	
	cout<<"Array input"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}cout<<endl;
	}
	cout<<"The Array"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j];
		}cout<<endl;
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			sum+=a[i][j];
		}
	}
	cout<<"The sum of all element:"<<sum;
}
