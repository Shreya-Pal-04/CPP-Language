#include<iostream>
using namespace std;

void insort(int arr[],int n){
	for (int i = 1; i < n; i++) {
	int key = arr[i];
	int j= i-1;
	
	while(j>=0 && arr[j] > key){
		arr[j+1] = arr[j];
		j--;
	}
		arr[j+1] = key;
	}
}
void printarr(int arr[],int n){
	cout<<"Sorted Array"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {5,3,1,4,2};
	int n = sizeof(arr[0]);
	
	insort(arr,n);
	printarr(arr,n);
	return 0;
}

