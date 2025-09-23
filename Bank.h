#pragma once
#include "Bankaccount.h"
#include"Customer.h"
class Bank
{
	vector<Customer> BankCustomers;
public:
	void AddCustomer() {
		cout << "\n-------------------------------------------\n";
		Customer c;
		cin >> c;
		BankCustomers.push_back(c);
		cout << "Customer added successfully!\n";
		cout << "\n-------------------------------------------\n";
	}
	void DeleteCustomer() {
		cout << "\n-------------------------------------------\n";
		int id; cout << "Enter customer ID who you want to delete: ";
		cin >> id;
		for (int i = 0; i < BankCustomers.size(); i++)
			if (BankCustomers[i].getID() == id) {
				BankCustomers.erase(BankCustomers.begin() + i);
				cout << "Deleted! \n";
				return;
			}
		cout << "Not Found \n";
		cout << "\n-------------------------------------------\n";
	}
	void ShowCustomers() {
		cout << "\n-------------------------------------------\n";
		if (BankCustomers.empty()) {
			cout << "No customers found.\n";
			return;
		}
		for (auto& i : BankCustomers)
			cout << i << '\n';	
		cout << "\n-------------------------------------------\n";
	}
	Customer* FindCustomer() {
		cout << "\n-------------------------------------------\n";
		int id; cout << "Enter customer ID who you want to find: ";
		cin >> id;
		
		for(auto& i : BankCustomers)
			if (i.getID() == id) {
				return &i;
				break;
			}
		return nullptr;
	}
};

