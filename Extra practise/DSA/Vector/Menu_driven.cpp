#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	int choice,element;
	
	while(1){
		cout<<"=== MENU ==="<<endl<<endl;
		cout<<"1. Add Element"<<endl;
		cout<<"2. Remove Last Element "<<endl;
		cout<<"3. Number of Element "<<endl;
		cout<<"4. First Element "<<endl;
		cout<<"5. Last Element "<<endl;
		cout<<"6. Clear Elements "<<endl;
		cout<<"7. Check vector is Empty? "<<endl;
		cout<<"8. Exit"<<endl<<endl;
		
		cout<<"Enter your Choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:{
				int el,i;
				cout<<endl<<"How many Element want you add: ";
				cin>>el;
				
				for(i=1; i<=el; i++){
					cout<<"Add "<<i<<" Eelement: ";
					cin>>element;
					v.push_back(element);
				}
				cout<<"~~~ Element successfully added. ~~~"<<endl;
				break;
			}
			case 2:{
				v.pop_back();
				cout<< "~~~ Last Element successfully Remove ~~~"<< endl;
				break;
			}
			case 3:{
				cout<< "Total Element of this vector: " <<v.size() <<endl;
				break;
			}
			case 4:{
				cout<<"The First Element is "<<v.front()<<endl;
				break;
			}
			case 5:{
				cout<<"The First Element is "<<v.back()<<endl;
				break;
			}
			case 6:{
				cout<< "~~~ Clear All Element ~~~" << v.clear() <<endl;
				break;
			}
		}
	}
}

