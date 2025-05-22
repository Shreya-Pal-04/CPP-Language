#include<iostream>
using namespace std;

main(){
	int i,j,row,col,a[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	
	cout<<"Enter number of Column:";
	cin>>col;
	
	cout<<"Array Input:"<<endl<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		} cout<<endl;
	}
	cout<<endl<<"The Array:"<<endl;
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		} cout<<endl;
	}
	
	int r,rsum=0;
	
	cout<<"Enter number of row: ";
	cin>>r;
	
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		
			if(i==r){
				cout<<a[i][j] <<endl;
				rsum += a[i][j];
			}
		}
	}  
	
	cout<<"The sum of row: "<<rsum;
	
	int c,csum=0;
	
	cout<<endl<<"Enter number of column: ";
	cin>>c;
	
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		
			if(i==c){
				cout<<a[j][i] <<endl;
				csum += a[j][i];
			}
		}
	}  
	
	cout<<"The sum of column: "<<csum;
}
