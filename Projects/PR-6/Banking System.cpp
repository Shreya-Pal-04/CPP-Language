#include<iostream>
using namespace std;

class BankAccount{
	private:
		int AccNumber;
		string AccName;
		double AccBalance;
	public:
		void setDetail(int accNo,string acName,double accbal){
			AccNumber = accNo;
			AccName = acName;
			AccBalance = accbal;
		}
		void getDetail(){
			cout<<endl<<" **** Account Information **** "<<endl;
			cout<<"Account Number: "<< AccNumber<<endl;
			cout<<"Account Holder Name: "<< AccName<<endl;
			cout<<"Account Balance: "<< AccBalance<<endl;
		}
		void deposit(double amount){
			if(amount>0){
				AccBalance += amount;
			}
		}
		void withdraw(double amount){
			if(amount > 0 && amount <= AccBalance){
				AccBalance -= amount;
				cout<<" ~~~~ "<< amount << " Withdraw Successfully Done."<<" ~~~~ ";
			}else{
				cout<<"Invalid Amount";
			}
		}
		int getAccNumber(){
			return AccNumber;
		}
};
int main(){
	BankAccount acc[20];
	int cnt=0,choice;
	int accNo;
	string acName;
	double accbal;
	float amount;
	do{
		cout<<endl<<"===== Banking system ====="<<endl;
		cout<<"Press 1: Create Account "<<endl;
		cout<<"Press 2: Account Details "<<endl;
		cout<<"Press 3: Deposit Amount "<<endl;
		cout<<"Press 4: Withdraw Amount "<<endl;
		cout<<"Press 5: Exit "<<endl;
		cout<<"Enter your Choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:{
				cout<<"Enter Account Number: ";
				cin>> accNo;
				cout<<"Enter Account Holder name: ";
				cin>>acName;
				cout<<"Enter Amount: ";
				cin>>accbal;
				
				acc[cnt].setDetail(accNo,acName,accbal);
				cnt++;
				cout<<" ~~~~ "<< "Account Create Successfully"<<" ~~~~ "<<endl;
				break;
		}
			case 2:{
				cout<<" Enter Account Number: ";
				cin>>accNo;
				int f=0,i;
				for(i=0; i<cnt; i++){
					if(acc[i].getAccNumber() == accNo){
						acc[i].getDetail();
						f = 1;
						break;
					}
				}
				if(f==0){
					cout<<" ---- Account not found. ----";
				}
				break;
			}
			case 3:{
				cout<<"Enter Account Number: ";
				cin>>accNo;
				int fnd=0,i;
				for	(i=0; i<cnt; i++){
					if(acc[i].getAccNumber() == accNo){
						cout<<"Enter Amount to deposit: ";
						cin>>amount;
						acc[i].deposit(amount);
						cout<<" ~~~~ "<<amount<<" Deposited Successfully"<<" ~~~~ ";
						fnd=1;
						break;
					}
				}if(fnd==0){
					cout<<"---- Account not found ----";
				}
				break;
			}
			case 4:{
				cout<<"Enter Account Number: ";
				cin>>accNo;
				int fnd=0,i;
				for	(i=0; i<cnt; i++){
					if(acc[i].getAccNumber() == accNo){
						cout<<"Enter Amount to Withdraw: ";
						cin>>amount;
						acc[i].withdraw(amount);
						fnd=1;
						break;
					}
				}if(fnd==0){
					cout<<" ---- Account not found ----";
				}
				break;
		}
			case 5:
				cout<<"---- Exiting. Thank you. ----";
				break;
			default:
				cout<<"---- Invalid Choice. ----";
		}
	}while(choice != 5);
	return 0;
}
