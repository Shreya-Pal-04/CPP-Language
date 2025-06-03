#include<iostream>
using namespace std;


int fact(int no);
int fact(int no){
	if(no<=1){
		return 1;
	}else{
		return no*fact(no-1);
	}
}
main(){
	int no=5;
	cout<<"Factorial :- "<<fact(no);
}

