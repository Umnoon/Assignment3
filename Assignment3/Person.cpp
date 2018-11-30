#include "Person.h"
#include<iostream>
using namespace std;


Person::Person()
{

	personFirstName = "";
	personLastName = "";
	birthDate = "";
	fatherName = "";
	motherName = "";
	maritalStatus = "";
	spouseName = "";
	presentAddress = "";
	permanentAddress = "";
	eyeColor = "";
	hairColor = "";
	age = 0;
	height = 0;
	weight = 0;
}


//Person::~Person()
//{
//}
string Person::get_person_first_name()
{
	return personFirstName;
}
string Person::get_person_last_name()
{
	return personLastName;
}
string Person::get_birth_date()
{
	return birthDate;
}
string Person::get_father_name()
{
	return fatherName;
}
string Person::get_mother_name()
{
	return motherName;
}
string Person::get_present_address()
{
	return presentAddress;
}
string Person::get_permanent_address()
{
	return permanentAddress;
}
string Person::get_marital_status()
{
	return maritalStatus;
}
string Person::get_spouse_name()
{
	return spouseName;
}
string Person::get_eye_colour()
{
	return eyeColor;
}
string Person::get_hair_colour()
{
	return hairColor;
}
int Person::get_NID_number()
{
	return nationalID;
}
int Person::get_person_age()
{
	return age;
}
int Person::get_person_height()
{
	return height;
}
int Person::get_person_weight()
{
	return weight;
}

//setters
void Person::set_person_first_name(string personFirstName)
{
	this->personFirstName = personFirstName;
}
void Person::set_person_last_name(string personLastName)
{
	this->personLastName = personLastName;
}
void Person::set_birth_date(string birthDate)
{
	this->birthDate = birthDate;
}
void Person::set_father_name(string fatherName)
{
	this->fatherName = fatherName;
}
void Person::set_mother_name(string motherName)
{
	this->motherName = motherName;
}
void Person::set_present_address(string presentAddress)
{
	this->presentAddress = presentAddress;
}
void Person::set_permanent_address(string permanentAddress)
{
	this->permanentAddress = permanentAddress;
}
void Person::set_marital_status(string maritalStatus)
{
	this->maritalStatus = maritalStatus;
}
void Person::set_spouse_name(string spouseName)
{
	this->spouseName = spouseName;
}
void Person::set_eye_colour(string eyeColor)
{
	this->eyeColor = eyeColor;
}
void Person::set_hair_colour(string hairColor)
{
	this->hairColor = hairColor;
}
void Person::set_person_height(int height)
{
	this->height = height;
}
void Person::set_person_weight(int weight)
{
	this->weight = weight;
}
void Person::set_NID_number(int nationalID)
{
	this->nationalID = nationalID;
}
void Person::set_person_age(int age)
{
	this->age = age;
}
void Person::print_all_fields()
{
	cout << "First name: " << personFirstName << endl << "Last name: " << personLastName << endl << "Date of Birth: " << birthDate << endl << "Father's Name: " << fatherName << endl << "Mother's name: " << motherName << endl << "Marital Status: " << maritalStatus << endl << "Spouse name: " << spouseName << endl << "Present Address: " << presentAddress << endl << "Permanent Address: " << permanentAddress << endl << "Height: " << height << endl << "Weight: " << weight << endl << "Hair Color: " << hairColor << endl << "Eye Color: " << eyeColor << endl << "Age: " << age << endl;
}
