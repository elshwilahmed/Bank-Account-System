#include "Customer.h"
int Customer::cnt = 0;
istream& operator >> (istream& input, Customer& customer) {
	cout << "Enter Customer Data in this order: \n";
	cout << "Name - Age - Email - Phone Number .\n";
	string n, e, p; int a;
	input >> n;
	customer.setname(n);
	input >> a >> e >> p;
	customer.setemail(e);
	customer.setage(a);
	customer.setphonenumber(p);
	return input;
}
ostream& operator << (ostream& output, Customer& customer) {
	output << "customer #" << customer.getID()
		<< " | Name: " << customer.getname()
		<< " | Email: " << customer.getemail()
		<< " | Age: " << customer.getage()
		<< " | Phone Number: " << customer.getphonenumbr() << endl;
	return output;
}