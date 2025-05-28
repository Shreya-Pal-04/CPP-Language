#include<iostream>
using namespace std;

int add(int a,int b){ return a+b;
}
int sub(int a,int b){ return a-b;
}
int mul(int a,int b){ return a*b;
}
float div(int a,int b){ return a/b;
}
float mod(int a,int b){ return a%b;
}

main(){
	char choice;
	int a,b;
	
	do{
		cout<<"	~~~~ Calculator ~~~~ "<<endl<<endl;
		
		cout<<"Enter 1 for (+)Addition"<<endl;
		cout<<"Enter 2 for (-)Subtraction"<<endl;
		cout<<"Enter 3 for (*)Multification"<<endl;
		cout<<"Enter 4 for (/)Division"<<endl;
		cout<<"Enter 5 for (%)Modulus"<<endl;
		cout<<"Enter 0 for exit"<<endl<<endl;
		
		cout<<"Enter your Choice:";
		cin>>choice;
		
		if(choice == '0'){
			cout<<"Exiting Programm..";
			break;
		}
		cout<<"Enter any first number:";
		cin>>a;
		cout<<"Enter any seconf number:";
		cin>>b;
		
		switch(choice){
			case'1':
				cout<<"Result :-"<<add(a,b)<<endl;
				break;
			case'2':
				cout<<"Result :-"<<sub(a,b)<<endl;
				break;
			case'3':
				cout<<"Result :-"<<mul(a,b)<<endl;
				break;
			case'4':
				cout<<"Result :-"<<div(a,b)<<endl;
				break;
			case'5':
				cout<<"Result :-"<<mod(a,b)<<endl;
				break;
			default:
				cout<<"Invalid Choice!"<<endl;
		}
	}while(choice!=0);
}
