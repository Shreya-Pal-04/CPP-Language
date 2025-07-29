#include<iostream>
using namespace std;

int linear_Search(int a[], int no, int t){
	int i;
	for(i=0; i<no; i++){
		
		if (a[i] == t) {
			return i;
		}
	}return -1;
}
main(){
	int a[5]={55, 28, 36, 4, 16};
	int t = 30;
	int no = sizeof(a) / sizeof(a[0]);
	int result = linear_Search(a, no, t);
	
	if (result != -1){
		cout<<"Element at index: "<<result<<endl;
	}
	else{
		cout<<"--- Element not found ---"<<endl;
	}
}
