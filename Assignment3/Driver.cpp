#include"Person.h"
#include<iostream>
using namespace std;

int main()
{
	Person p1;
	p1.set_father_name("Mohammad Ali");
	cout << p1.get_father_name() << endl;
}