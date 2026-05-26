#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validator.h"
using namespace std;
class Employee : public Person {
protected:
	double salary;
public:
	//default constructor
	Employee() {
		this->salary = 0;
	}
	//setters
	void set_name(string name) {
		if (Validator::isValidName(name)) {
			this->name = name;
			cout << "Name successfully setted" << endl;
		}
		else {
			cout << "1.A name should consist only of alphabetic characters" << endl;
			cout << "2.A name min size is 5 characters & max size is 20 characters" << endl;
		}
	}
	void set_password(string password) {
		if (Validator::isValidPassword(password)) {
			this->password = password;
			cout << "Password successfully setted" << endl;
		}
		else {
			cout << "A password min size is 8 characters & the max is 20" << endl;
		}
	}
	void set_salary(double salary) {
		if (salary > 5000) {
			this->salary = salary;
			cout << "Salary successfully setted" << endl;
		}
		else {
			cout << "The min salary is 5000$" << endl;
		}
	}
	//getters
	int get_id() {
		return id;
	}
	string get_name() {
		return name;
	}
	string get_password() {
		return password;
	}
	double get_salary() {
		return salary;
	}
	//methods
	void display() override {
		cout << "Employee's name: " << name << endl;
		cout << "Employee's salary: " << salary << "$" << endl;
	}
};

