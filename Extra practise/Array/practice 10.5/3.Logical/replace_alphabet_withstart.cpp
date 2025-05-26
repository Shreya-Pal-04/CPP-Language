#include<iostream>
using namespace std;

main(){
	int i,j,row,col;
	char ch,m[50][50];
	
	cout<<"Enter number of row:";
	cin>>row;
	cout<<endl<<"Enter number of column:";
	cin>>col;
	
	cout<<endl<<"Matrix Input:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"m["<<i<<"] ["<<j<<"] :";
			cin>>m[i][j];
		}cout<<endl;
	}
	cout<<endl<<"The metrix:"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<m[i][j];
		}cout<<endl;
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			ch = m[i][j];
			if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))) {
                m[i][j] = '*';
            }
		}
	}
	cout << "Matrix after replacing non-alphabet characters:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
