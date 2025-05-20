#include<iostream>
using namespace std;

main(){
	int i,n,a[i];
	int index,value;
	
	cout<<"Enter array size:";
	cin>>n;
	
	cout<<"Enter array element:"<<" ";
	for(i=0; i<n; i++){
		cin>>a[i];	
	}
	cout<<"Array"<<endl;
	for(i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Enter insert value:";
	cin>>value;
	
	cout<<"Enter Index of insert value: ";
	cin>>index;
	
	for(i=n-1; i>=index; i--){
		a[i+1] = a[i];
	}
	a[index] = value;
	n++;
	cout<<"Array after insert value:"<<endl;
	for(i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
}
