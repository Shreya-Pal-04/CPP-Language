#include<iostream>
using namespace std;

class Student{
	private:
		int age;
	public:
		void setAge(int n){
			if(n>=5 && n<=25){
				age = n;
			}else{
				cout<<"Not Valid..";
			}
		}
		int getAge(){
			return age;
		}
};
int main(){
	Student s;
	s.setAge(22);
	cout<<"Your Age is : "<<s.getAge();
	return 0;
}
