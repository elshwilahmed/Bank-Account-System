#pragma once
#include<iostream>
#include <string>	
#include<vector>
#include "Transaction.h"


class Bankaccount
{
	string name;
	int number;
	double balance;
	vector<Transaction> transactions;
public:
	static int cnt;
	Bankaccount(string n = "") {
		name = n;
		balance = 0.0;
		number = cnt;
		cnt++;
	}
	void setname(string n) {
		name = n;
	}
	string getname() {
		return name;
	}
	void depositing(double amount, string date) {
		balance += amount;
		cout << "The transaction was successful \n";
		transactions.push_back(Transaction(amount, "Deposit", date));
	}
	void withdraw(double amount, string date) {
		if (balance >= amount) {
			balance -= amount;
			transactions.push_back(Transaction(amount, "withdraw", date));
		}
		else
			cout << "Your balance is insufficient! \n";
	}
	double getbalance() {
		return balance;
	}
	int getNumberAccount() {
		return number;
	}
	void PrintTransactions() {
		cout << "Transaction history for account #" << number << ":\n";
		for (auto &i : transactions)
			i.PrintTransaction();
	}
	friend istream& operator>>(istream& input, Bankaccount& account);
	friend ostream& operator<<(ostream& output, Bankaccount& account);
};



