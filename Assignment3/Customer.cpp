#include "Customer.h"
#include"Person.h"
#include<iostream>
#include<list>
#include<string>
using namespace std;


Customer::Customer()
{
	
}


Customer::~Customer()
{

}
int Customer::get_customer_id()
{
	return customerID;
}
void Customer::set_customer_id(int customerID)
{
	this->customerID=customerID;
}
void Customer::display_information()
{
	print_all_fields();
	//cout << "National ID: "<<get_nid<<"First name: " << get_person_first_name << endl << "Last name: " <<get_person_last_name << endl << "Date of Birth: " << get_birth_date << endl << "Father's Name: " << get_father_name << endl << "Mother's name: " << get_mother_name << endl << "Marital Status: " << get_marital_status<< endl << "Spouse name: " << get_spouse_name << endl << "Present Address: " << get_present_address << endl << "Permanent Address: " << get_permanent_address<< endl << "Height: " << get_person_height << endl << "Weight: " << get_person_weight << endl << "Hair Color: " << get_hair_colour << endl << "Eye Color: " << get_eye_colour << endl << "Age: " << get_person_age << endl;
}