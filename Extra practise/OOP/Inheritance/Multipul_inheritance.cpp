#include<iostream>
using namespace std;

class A{
	public:
		int a;
};
class B{
	public:
		int b;
};
class C:public A,public B{
	public:
		int sum(){
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Sum :- "<<a+b;
		}
};
int main(){
	C c;
	c.sum();
	return 0;
}
