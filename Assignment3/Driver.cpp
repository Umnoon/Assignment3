#include"Person.h"
#include<iostream>
#include<list>
#include<string>
using namespace std;

struct Phone_Number
{
	string phoneNumber;
	string operatorName;
	Phone_Number() {}
	Phone_Number(string newNumber, const string& opName)
		: phoneNumber(newNumber), operatorName(opName) {}
	void print()const {
		cout << "Phone number: " << phoneNumber << " " << "Operator: " << operatorName << endl;
	}
};
int main()
{
	list <Phone_Number> myNumber;
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	list<Phone_Number>::const_iterator it = myNumber.begin();
	while (it != myNumber.end()) {
		it->print();
		++it;
	}
	
	Person p1;
	p1.set_father_name("Mohammad Ali");
	cout << p1.get_father_name() << endl;
}