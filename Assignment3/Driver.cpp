#include"Person.h"
#include"Customer.h"
#include"Call.h"
#include<iostream>
#include<list>
#include<queue>
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
	priority_queue <pair<int, string>> que;
	que.push(make_pair(1,"wife"));
	que.push(make_pair(3,"Father"));
	que.push(make_pair(2,"Child"));
	que.push(make_pair(12,"Blocked"));
	que.push(make_pair(11,"Boss"));
	

	while(!que.empty())
	{
		pair<int, string> top = que.top();
		cout << top.first << " , " <<top.second<<"\n"<< endl;
		que.pop();
	}


	Call call;
	call.enqueue("Wife", 1);
	call.enqueue("child", 2);
	call.enqueue("father", 3);
	call.enqueue("blocked", 12);
	call.enqueue("boss", 11);
	call.printQueueContent();
	Customer c1;
	c1.display_information();
	list <Phone_Number> myNumber;
	
	//c1.myNumber.push_back(Phone_Number("0162707553", "Grameemphone"));
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