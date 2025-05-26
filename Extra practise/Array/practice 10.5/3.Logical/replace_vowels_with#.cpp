#include<iostream>
using namespace std;

main(){
	int i,j,row,col;
	char ch,m[50][50];
	
	cout<<"Enter number of rows:";
	cin>>row;
	cout<<"Enter number of columns:";
	cin>>col;
	
	cout<<"Enter element(character) in matrix: "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"m["<<i<<"] ["<<j<<"] :";
			cin>>m[i][j];
		} cout<<endl;
	}
	cout<<endl<<"The Matrix:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<m[i][j];
		} cout<<endl;
	}
	cout<<endl<<"replace vowels with # "<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			ch = m[i][j];
			if(ch=='a' || ch=='i' || ch=='o' || ch=='u' || ch=='e' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
				m[i][j] = '#';
			}
		} 
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<m[i][j];
		} cout<<endl;
	}
}
