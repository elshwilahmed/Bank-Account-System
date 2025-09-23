#pragma once
#include<iostream>
#include <string>		
using namespace std;
class Transaction
{
	int Number;
	double amount;
	string type;
	string date;
public:
	static int cnt;
	Transaction(double am , string t , string d) {
		amount = am;
		date = d;
		type = t;
		cnt++;
		Number = cnt;
	}
	void PrintTransaction() {
		cout << "Transaction number " << Number << '\n'
			<< "Amount: " << amount << '\n'
			<< "Type: " << type << '\n'
			<< "Date:  " << date << '\n';
	}


};

