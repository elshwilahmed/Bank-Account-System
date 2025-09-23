#include <iostream>
#include "Bankaccount.h"
#include "Customer.h"
#include"Bank.h"
using namespace std;
int ReadAmount() {
	int n;
	do {
		cin >> n;
	} while (n <= 0);
	return n;
}
void ResetScreen() {
	system("cls");
}

void UpdateAccount(Bank& b) {
	Customer* c = b.FindCustomer();
	if (c != nullptr) {
		char n = 'y'; int choice = 0;
		do {
			cout << "Choose number from this menu.\n";
			cout << "\t\t(Menu List)\n";
			cout << "1.Create account.\n";
			cout << "2.Delete account.\n";
			cout << "3.Deposit Operation.\n";
			cout << "4.Withdraw Operatiorn.\n";
			cout << "5.Get Balance.\n";
			cout << "6.Show All Transactions.\n";
			cin >> choice;
			string date = " "; int amount = 0;
			switch (choice) {
			case 1: {
				c->CreateAccount();
				break;
			}
			case 2: {
				c->DeleteAccount();
				break;
			}
			case 3: {
				Bankaccount* a = c->FindAcccount();
				cout << "Enter Amount and Date: \n";
				cin >> amount >>date;
				a->depositing(amount, date);
				break;
			}
			case 4: {
				Bankaccount* a = c->FindAcccount();
				cout << "Enter Amount and Date: \n";
			    cin >> amount >> date;
				a->withdraw(amount, date);
				break;
			}
			case 5: {
				Bankaccount* a = c->FindAcccount();
				cout << "The Account Balance: ";
				cout << a->getbalance() << '\n';
				break;
			}
			case 6: {
				Bankaccount* a = c->FindAcccount();
				a->PrintTransactions();
				break;
			}
			}
			cout << "Do you want another operation? (y/n): ";
			cin >> n;
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // تنظيف البافر
		} while (tolower(n) == 'y');
	}
	else
		cout << " This Customer is Not Found!\n";
}
void OpenBankSystem(Bank& b) {
	char n = ' ';
	int choice = 0;
	do {
		cout << "\t\t***Bank System***\n";
		cout << "Choose number from this menu.\n";
		cout << "\t\t(Menu List)\n";
		cout << "1.Add Customer.\n";
		cout << "2.Delete Customer.\n";
		cout << "3.Find Customer.\n";
		cout << "4.Update Account.\n";
		cout << "5.Show All Customers.\n";
		cout << "6.Exit!\n";
		cin >> choice;

		switch (choice) {
		case 1: {
			ResetScreen();
			b.AddCustomer();
			break;
		}
		case 2: {
			ResetScreen();
			b.DeleteCustomer();
			break;
		}
		case 3: {
			ResetScreen();
			if (b.FindCustomer() != nullptr)
				cout << "Found\n";
			else
				cout << "Not Found\n";
			cout << "\n-------------------------------------------\n";;
			break;
		}
		case 4: {
			ResetScreen();
			UpdateAccount(b);
			break;
		}
		case 5: {
			b.ShowCustomers();
		}
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	} while (choice != 6);

}
int main()
{
	Bank b; 
	OpenBankSystem(b);
}

