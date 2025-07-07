#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};
class LinkedList{
	public:
		Node *head;
		int count;
		
			LinkedList(){
				head= NULL;
				count= 0;
			}
			
			void create(int data){
				Node *newNode = new Node(data);
				if(head == NULL){
					head = newNode;
				}else{
					Node *ptr = head;
					while(ptr->next != NULL){
						ptr = ptr->next;
					}
					ptr->next = newNode;
				} count++;
			}
			void viewData(){
				if(head == NULL){
					cout<<"--- List is Empty ---"<<endl;
				}
				Node *ptr = head;
				cout<<"*** View Node ***"<<endl;
				while(ptr != NULL){
					cout<<ptr->data<<endl;
					ptr = ptr->next;
				}
			}
			void update(int position,int newData){
				if(position < 0 || position >=count){
					cout<<"--- Invalid Position ---"<<endl;
					return;
				}
				Node *ptr = head;
				for(int i=0; i<position; i++){
					ptr = ptr->next;
				}
				ptr->data = newData;
				cout<<"--- Node Successfully Update ---"<<endl;
			}
			void deleteNode(int position){
				if(position <0 || position >=count || head==NULL){
					cout<<"--- Invalid Position ---"<<endl;
					return;
				}
				Node *ptr;
				if(position ==0){
					ptr = head;
					head = head->next;
				}else{
					Node *prev = head;
					for(int i=0; i<position-1; i++){
						prev = prev->next;
					}
					ptr = prev->next;
					prev->next = ptr->next;
				}
				delete ptr;
				count--;
				cout<<"--- Node Successfully Delete ---"<<endl;
			}
};
main(){
	LinkedList list;
	int ch,ele,position;
	do{
		cout<<endl;
		cout<<"==== MENU ===="<<endl;
		cout<<"1 for Create Node"<<endl;
		cout<<"2 for View Node"<<endl;
		cout<<"3 for Update Node"<<endl;
		cout<<"4 for Delete Node"<<endl;
		cout<<"0 for Exit"<<endl;
		cout<<"Enter your Choice: ";
		cin>>ch;
		
		if(ch == 0){
			cout<<"--- Thank You ---"<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter an Element : ";
				cin>>ele;
				list.create(ele);
				cout<<"--- Element Successfully Insert ---"<<endl;
			break;
			
			case 2:
				list.viewData();
			break;
			
			case 3:
				cout<<"Enter Element: ";
				cin>>ele;
				cout<<"Enter that Element Position: ";
				cin>>position;
				list.update(position,ele);
			break;
			
			case 4:
				cout<<"Enter Position: ";
				cin>>position;
				list.deleteNode(position);
			break;
			
			default:
				cout<<"---- Invalid Choice ----"<<endl;
		}
	}while(1);
}
