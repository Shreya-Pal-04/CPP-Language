#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
		int x,y;
};
class B:public A{
	public:
		void sum(){
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Sum :- "<<a+b<<endl;
		}
};
class C:public A{
	public:
		int s;
		int sub(){
			cout<<"Enter X: ";
			cin>>x;
			cout<<"Enter Y: ";
			cin>>y;
			cout<<"Sub :- "<<x-y<<endl;
		}
};
class D:public A,public B,public C{
	public:
		int mul(){
			cout<<"Enter s value: ";
			cin>>s;
			cout<<"Squre :- "<<s*s<<endl;
		}
};
int main(){
	D d;
	d.sum();
	d.sub();
	d.mul();
}
