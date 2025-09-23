#pragma once
#include "BankAccount.h"
#include<vector>
class Customer
{
	string name;
	int age;
	int ID;
	string email;
	string PhoneNumber;
	vector<Bankaccount> Accounts;
public:
	static int cnt;
	Customer() {
		cnt++;
		ID = cnt;
		age = 0;
		email = "";
		PhoneNumber = "";
		
	}
	void setname(string s) {
		name = s;
	}
	string getname() {
		return name;
	}
	void setage(int s) {
		age = s;
	}
	int getage() {
		return age;
	}
	void setemail(string s) {
		email = s;
	}
	string getemail() {
		return email;
	}
	void setphonenumber(string s) {
		PhoneNumber = s;
	}
	string getphonenumbr() {
		return PhoneNumber;
	}
	int getID() {
		return ID;
	}
	void CreateAccount() {
		Bankaccount account;
		cin >> account;
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		Accounts.push_back(account);
		cout << "Succesful operation\n";
	}
	Bankaccount* FindAcccount() {
		int n;
		do {
			cout << "Enter The Number of Account Which you find: ";
			cin >> n;
		} while (n > Accounts.size() || n < 0);
		for (auto& i : Accounts)
			if (i.getNumberAccount() == n) {
				return &i;
				break;
			}
		return nullptr;
	}
	void DeleteAccount() {
		Bankaccount* a = FindAcccount();
		if (a != nullptr) {
			for (int i = 0; i < Accounts.size();i++)
				if (Accounts[i].getNumberAccount() == a->getNumberAccount()) {
					Accounts.erase(Accounts.begin() + i);
					cout << "Deleted \n";
					break;
				}
		}
		else
			cout << "Not Find!\n";
	}

	void ShowAccounts() {
		for (auto& i : Accounts)
			cout << i;
	}
	friend istream& operator>>(istream& input, Customer& customer);
	friend ostream& operator<<(ostream& output, Customer& customer);
};

