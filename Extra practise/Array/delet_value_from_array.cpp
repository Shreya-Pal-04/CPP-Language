#include<iostream>
using namespace std;

main(){
	int i, n, a[i];
	int index;
	
	cout<<"Enter array size:";
	cin>>n;
	
	cout<<"Enter array element";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<"Enter deleting index:";
	cin>>index;
	
	for(i=index; i<n; i++){
		a[i]=a[i+1];
	}
	n--;
	
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
