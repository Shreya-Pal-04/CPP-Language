#include<iostream>
using namespace std;

main(){
	int n,i,a[i],sum=0;
	
	cout<<"Enter size of array=";
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		sum+= a[i];
	} cout<<"Sum of all element is"<<sum;
}
