#include<iostream>
using namespace std;

int main(){
	
	int a[8] = {555, 20, 65, 88, 50, 58, 16, 98};
	int no = sizeof(a)/sizeof(a[0]),i;
	
	for(i; i<no-1; i++){
		int minimum = i;
		int j;
		
		for(j = i+1; j<no; j++){
			if(a[j] < a[minimum]){
				minimum = j;
			}
		}
		if(minimum != i){
			int tmp = a[i];
			a[i] = a[minimum];
			a[minimum] = tmp;
		}
	}
	for(int i=0; i<no; i++){
		cout<<" "<<a[i];
	}
	return 0;
}
