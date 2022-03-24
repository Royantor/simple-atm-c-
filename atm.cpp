#include<iostream>
using namespace std;
void showMenu(){
	cout<<"******MENU*******"<<endl;
	cout<<"1. check Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. withdraw"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"******************"<<endl;
}
int main(){
	int option;
	double balance=500;
	do{
	
	showMenu();
	cout<<"option:"<<endl;
	cin>>option;
	system("cls");
	switch(option){
		case 1:
			cout<<"Balance is $"<<balance<<endl;
			break;
		case 2:
		    cout<<"how much money you want to add:"<<endl;
		    double deposit;
		    cin>>deposit;
		    balance+=deposit;
		    break;
		case 3:
		    cout<<"withdraw money"<<endl;
			double withdraw;
			cin>>withdraw;
			if(withdraw<=balance){
				balance-=withdraw;	
			}else{
				cout<<"not enough money"<<endl;
			}
		    
			break;	
	}
	}while(option!=4);
	
}
