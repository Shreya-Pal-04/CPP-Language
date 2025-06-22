#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<<"The size:- "<<v.size()<<endl;
	cout<<"The first Element:- "<<v.front()<<endl;
	cout<<"The last element:- "<<v.back()<<endl<<endl;
	
	v.insert(v.begin()+2,25);
	
	cout<<endl<<"Third Index element:- "<<v.at(2)<<endl<<endl;
	
	cout<<"The size:- "<<v.size()<<endl<<endl;
	
	v.pop_back();
	cout<<"The last element:- "<<v.back()<<endl<<endl;
	
	cout<<"The size:- "<<v.size()<<endl<<endl;
	return 0;
}
