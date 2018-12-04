#pragma once
#include<iostream>
#include<string>
#include<list>
#include"Person.h"

using namespace std;

class Customer : Person 
{
private:
	int nid;
	
public:
	Customer();
	~Customer();
	int get_nid();
	void set_nid(int nid);
	void display_information();
};

