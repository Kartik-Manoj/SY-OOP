/*
* 1087.cpp
*
*  Created on: 25-Jul-2025
*      Author: mmcoe
*/
#include<iostream>
#include<string>
using namespace std;
class bank{
	string name, ac_type;
	int ac_no;
	float balance;
public:
	 bank(string n, int acc, string type, float bal)   //constructor     
{
        name = n;
        ac_no = acc;
        ac_type = type;
        balance = bal;
    }
	void display();
	void withdraw(float amount);
	void deposit(float amount);
};
int main(){
    string name,ac_type;
    int ac_no, balance;
	cout<<"Enter account holder's name: ";
    cin>>name;

    cout<<"Enter account number: ";
    cin>>ac_no;
    
    cout<<"Enter account type: ";
    cin>>ac_type;

    cout<<"Enter initial balance: ";
    cin>>balance;
    bank obj1(name, ac_no, ac_type, balance);
    obj1.display();
   int choice;
   float amount;
   do{
   	cout<<"1.Deposit\t\t 2.Withdraw\t\t 3.View Bank Details\n";
   	cout<<"Enter your choice:";
   	cin>>choice;
   	switch(choice){
   	case 1:
		      cout<<"Enter deposit amount:";
		      cin>>amount;
		      obj1.deposit(amount);
		      break;
		case 2:
		      cout<<"Enter withdraw amount:";
		      cin>>amount;
		      obj1.withdraw(amount);
		      break;
		case 3:
			obj1.display();
		}
   }
   while (choice != 4);
return 0;
}

void bank::display(){
	cout<<"BANK DETAILS\n";
	cout<<"Name:"<<name<<"\n";
	cout<<"Account number:"<<ac_no<<"\n";
	cout<<"Account type:"<<ac_type<<"\n";
	cout<<"Balance amount:"<<balance<<"\n";
}
void bank::withdraw(float amount){
	balance-=amount;
}
void bank::deposit(float amount){
	balance+=amount;
}


