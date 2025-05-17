#include <iostream>
using namespace std;

main(){
	int n,a[n],i;
	cout<<"Enter size of array:";
	cin>>n;
	
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
