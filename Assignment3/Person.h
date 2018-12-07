#pragma once
#include<string>
using namespace std;
class Person
{
protected:
	string personFirstName;
	string personLastName;
	string birthDate;
	string fatherName;
	string motherName;
	string maritalStatus;
	string spouseName;
	string presentAddress;
	string permanentAddress;
	string eyeColor;
	string hairColor;
	int age;
	int height;
	int weight;
	int nationalID;
	int length;
public:
	Person();
	~Person();

	void set_person_first_name(string personFirstName);
	void set_person_last_name(string personLastName);
	void set_birth_date(string birthDate);
	void set_father_name(string fatherName);
	void set_mother_name(string motherName);
	void set_present_address(string presentAddress);
	void set_permanent_address(string permanentAddress);
	void set_marital_status(string maritalStatus);
	void set_spouse_name(string spouseName);
	void set_eye_colour(string eyeColor);
	void set_hair_colour(string hairColor);
	void set_person_height(int height);
	void set_person_weight(int weight);
	void set_NID_number(int nationalID);
	void set_person_age(int age);
	void print_all_fields();

	string get_person_first_name();
	string get_person_last_name();
	string get_birth_date();
	string get_father_name();
	string get_mother_name();
	string get_present_address();
	string get_permanent_address();
	string get_marital_status();
	string get_spouse_name();
	string get_eye_colour();
	string get_hair_colour();
	int get_person_height();
	int get_person_age();
	int get_person_weight();
	int get_NID_number();
};

