#include<iostream>
using namespace std;

class age{
	private:
		int age;
	public:
		void setAge(int n){
			age = n;
		}
		int getAge(){
			return age;
		}
};
int main(){
	age a;
	a.setAge(22);
	cout<<a.getAge();
	return 0;
}
