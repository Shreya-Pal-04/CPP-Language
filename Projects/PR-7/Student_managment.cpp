#include<iostream>
#include<vector>
using namespace std;

template<class T>
class MemoryCalculate{
	private:
	T id;
	string name;
	
	public:
		MemoryCalculate(T id,string name){
			this->id = id;
			this->name = name;
		}
		T getid(){
			return id;
		}
		void display(){
			cout<<"ID: "<<id<<"  Name: "<<name<<endl;
		}
};
int main(){
	vector< MemoryCalculate<int> > student;
	int ch,id;
	string name;
	
	do{
		cout<<endl<<"~~~ Student Management System ~~~"<<endl;
		cout<<"1 for Add Student"<<endl;
		cout<<"2 for Display all Student"<<endl;
		cout<<"3 for Student remove by ID"<<endl;
		cout<<"4 for Student Search by ID"<<endl;
		cout<<"5 for Exit"<<endl;
		cout<<"Enter your Choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:{
				cout<<endl<<"Eneter Student ID: ";
				cin>>id;
				cout<<"Enter Student Name: ";
				cin>>name;
				student.push_back(MemoryCalculate<int>(id,name));
				cout<<endl<<"---- Student Successfully Add ----"<<endl;
				break;
			}
			case 2:{
				if(student.empty()){
					cout<<endl<<"---- Student Not Found ----"<<endl;
				}else{
					cout<<endl<<"*** List of Student *** "<<endl;
					for(int i=0; i<student.size(); i++){
						student[i].display();
					}
				}
				break;
			}
			case 3:{
				cout<<"Enter ID to remove: ";
				cin>>id;
				int index = 1;
            for (int i=0; i<student.size(); i++){
                if (student[i].getid() == id){
                    index = i;
                    break;
                }
            }
			if (index != 1){
                student.erase(student.begin() + index);
                cout <<"--- Student removed.--- "<<endl;
            } else {
                cout <<"--- Student not found.--- "<<endl;
            }
				break;
			}
			
			case 4:{
				cout<<endl<<"Enter ID to Search: ";
				cin>>id;
				int i;
            for (i=0; i<student.size(); i++){
                if (student[i].getid() == id){
                    student[i].display();
                    break;
                }
            }
            if (i == student.size()) {
                cout<<endl<<"--- Student not found. ---"<<endl;
            }
				break;
			}
			case 5:{
				cout<<endl<<"Exiting Program...:)";
				break;
			}
			default:
				cout<<endl<<"Choice not valid..!!"<<endl;
		}
	}while(ch !=5);
}
