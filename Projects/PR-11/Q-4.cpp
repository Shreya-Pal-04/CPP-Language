#include<iostream>
using namespace std;

int partion(int arr[], int l, int h){
	
	int i,j,temp;
	int p = arr[h];
	
	i = l - 1;
	for(j=l; j<h; j++)
	{
		if(arr[j] < p)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[h];
	arr[h] = temp;
	return i + 1;
}
void quick_sort(int arr[], int l, int h){
	if(l < h)
	{
		int vl = partion(arr, l, h);
		quick_sort(arr, l, vl - 1);
		quick_sort(arr, l + 1, h);
	}
}
int main(){
	
	int arr[] = {12, 32, 384, 547, 15, 4, 50, 61};
	int i,n;
	
	n = sizeof(arr) / sizeof(arr[0]);
	cout<<"=== Not Soeted Array ==="<<endl;
	
	for (i=0; i<n; i++)
	{
		cout<<arr[i] <<" ";
	}cout<<endl;
	
	quick_sort(arr, 0, n - 1);
	cout<<endl<<"=== Sorted Array ==="<<endl;
	for (i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
