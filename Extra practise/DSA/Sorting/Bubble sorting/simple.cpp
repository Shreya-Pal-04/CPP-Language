#include<iostream>
using namespace std;

int main(){
	int a[4] = {3,2,4,1};
	int tep,i,j;
	
	for(i=0; i<4-1; i++){
		for(j=0; j<4-i-1; j++){
			if(a[j] > a[j+1]){
				tep = a[j];
				a[j] = a[j+1];
				a[j+1] = tep;
			}
		}
	}
	cout<<"---Sorting Array---"<<endl;
	for(i=0; i<4; i++){
		cout<<a[i]<<endl;
	}
}
