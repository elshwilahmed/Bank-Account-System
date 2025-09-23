#include "Bankaccount.h"
int Bankaccount::cnt = 1;
istream& operator>>(istream& input, Bankaccount& account) {
	cout << "Enter account name: ";
	string temp = "";
	getline(input, temp);
	account.setname(temp);
	return input;
}
ostream& operator<<(ostream& output, Bankaccount& account) {
	output << "Account #" << account.getNumberAccount()
		<< " | Name: " << account.getname()
		<< " | Balance: " << account.getbalance() << endl;
	return output;
}