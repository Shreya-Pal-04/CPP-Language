
#include<iostream>
#include<vector>
using namespace std;

void print_arr(vector <int> &arr){
	int i;
	cout<<"Array : "<<endl;
	for( i=0; i<arr.size(); i++){
		cout<<" "<<arr[i];
	}
	cout<<endl<<endl;
}
void Merge(vector <int> &arr, int l, int mid, int h){
	vector <int> tmp;
	int left = l;
	int right = mid + 1;
	
	while(left<=mid && right<=h){
		if(arr[left]<=arr[right]){
			tmp.push_back(arr[left]);
			left++;
		}else{
			tmp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		tmp.push_back(arr[left]);
		left++;
	}
	while(right<=h){
		tmp.push_back(arr[right]);
		right++;
	}
	for(int i=l;i<=h;i++){
		arr[i] = tmp[i-l];
	}
}

void merge_sort(vector <int> &ar,int low,int high){
	if(low>=high){
		return;
	}
	int mid;
	mid = (low + high) / 2;
	merge_sort (ar, low, mid);
	merge_sort (ar, mid + 1, high);
	Merge (ar, low, mid, high);
}

int main(){
	int n;
	cout<<"Enter the size of array:- ";
	cin>>n;
	vector <int> arr;
	
	for(int i=0; i<n; i++){
		int element;
		cout<<"Enter array elements: ";
		cin>>element;
		arr.push_back(element);
	}
	print_arr(arr);
	merge_sort(arr, 0, n-1);
	print_arr(arr);
	
	return 0;
}

