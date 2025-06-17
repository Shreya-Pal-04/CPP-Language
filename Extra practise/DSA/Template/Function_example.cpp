#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b){
	return a+b;
}
main(){
	cout<<"Sum :- "<<add<int>(5,3)<<endl;
	cout<<"Sum :- "<<add<double>(2.60,3.60)<<endl;
	return 0;
}
