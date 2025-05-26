#include<iostream>
using namespace std;

main(){
	int i,j,row,col,rindex,cindex,nvalue,m[50][50];
	
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
	cout<<endl<<"Enter row index to replace:";
	cin>>rindex;
	cout<<endl<<"Enter row index to replace:";
	cin>>cindex;
	cout<<endl<<"Enter new Value:";
	cin>>nvalue;
	
	if(rindex >= 0 && rindex < row && cindex >= 0 && cindex < col) {
        m[rindex][cindex] = nvalue;
    } else {
        cout << "Invalid row or column index!" << endl;
    }
	
	cout << "Upadate Matrix:"<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
