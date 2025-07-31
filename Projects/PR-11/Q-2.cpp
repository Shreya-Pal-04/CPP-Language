#include<iostream>
using namespace std;

int binarySearch(int a[], int no, int key){
	int low = 0,high = no-1;	
	while (low <= high){
		int mid = (low+high) / 2;
		if (a[mid] == key){
			return mid;
		}else if (a[mid] < key){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}return -1;
}
main(){
	int a[] ={80,66,30,20,10,7,6};
	int no = sizeof(a)/sizeof(a[0]);

	int key = 20; 
	int i=binarySearch(a,no,key);
	
	if(i != -1){
		cout<<"Element at index : "<<i<<endl;
	}else{
		cout<<"--- Element not found ---"<<endl;
	}
	return 0;
}


