#include<iostream>
using namespace std;

int sum(int a,int b);
main(){
	cout<<"Answer :- "<<sum(10,20)<<endl;
	cout<<"Answer :- "<<sum(10,40)<<endl;
}
int sum(int a,int b){
	return a+b;
}
