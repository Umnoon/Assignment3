
#include"Customer.h"
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
	Customer c1;
	c1.set_nid(23);
	cout << c1.get_nid() << endl;
	c1.display_information();
	list <Phone_Number> myNumber;
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
	myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));


	if (myNumber.size() >= 15)
		cout << "Request Denied.\nYou cannot add more than 15 phone numbers." << endl;
	list<Phone_Number>::const_iterator it = myNumber.begin();
	while (it != myNumber.end()) {
		it->print();
		++it;
	}
	//Customer c1;
	//c1.insert_phone_number(Phone_Number("0162707553", "Grameemphone"));
	
	Person p1;
	p1.set_father_name("Mohammad Ali");
	cout << p1.get_father_name() << endl;
}