#include<iostream>
using namespace std;

main(){
	int n,a[n],i;
	int even=0,odd=0;
	
	cout<<"Enter array size:";
	cin>>n;
	
	cout<<endl<<"Enter "<<n<<" elements:"<<endl;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<endl<<"Even Numbers: ";
	for(i=0; i<n; i++){
		if(a[i] % 2 ==0){
			cout<<a[i]<<" ";
			even++;
		}
	} cout<<endl<<"Total Even number is : "<<even<<endl<<endl;
	cout<<"Odd Numbers: ";
	for(i=0; i<n; i++){
		if(a[i] % 2 != 0){
			cout<<a[i]<<" ";
			odd++;
		}
	}
	cout<<endl<<"Total Odd number is : "<<odd<<endl;
}
