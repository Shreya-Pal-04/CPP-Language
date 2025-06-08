#include<iostream>
using namespace std;

class Bankbalance{
	private:
		int balance;
	public:
		void setBal(int balance){
			if(balance >=1000){
				this->balance = balance;
			}else{
				cout<<"Bank Balace too low.";
			}
		}
		int getBal(){
			return balance;
		}
};
int main(){
	Bankbalance b;
	b.setBal(2200);
	cout<<"Your Bank Balance  is : "<<b.getBal();
	return 0;
}
