#pragma once
#include<iostream>
#include<string>
#include<list>
#include"Person.h"

using namespace std;

class Customer : Person 
{
private:
	int customerID;
	
public:
	Customer();
	~Customer();
	int get_customer_id();
	void set_customer_id(int customerID);
	void display_information();

};

