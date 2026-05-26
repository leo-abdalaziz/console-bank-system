#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validator.h"
using namespace std;
class Client : public Person{
private:
	//attriputes
	double balance;
public:
	//default constructor
	Client() {
		this->balance = 0;
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
	void set_balance(double balance) {
		if (balance > 1500) {
			this->balance = balance;
			cout << "Balance successfully setted" << endl;
		}
		else {
			cout << "The min balance is 1500$" << endl;
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
	double get_balance() {
		return balance;
	}
	//methods
	void deposit(double amount) {
		this->balance += amount;
		cout << "Successful deposit" << endl;
	}
	void withdraw(double amount) {
		if (amount < balance) {
			this->balance -= amount;
			cout << "Successful withdrawal" << endl;
		}
		else {
			cout << "Not enough balance" << endl;
		}
	}
	void transfer(double amount, Client& c) {
		if (amount < balance) {
			this->balance -= balance;
			c.balance += amount;
			cout << "Successful transfer" << endl;
		}
		else {
			cout << "Not enough balance" << endl;
		}
	}
	void check_balance() {
		cout << "Your balance is: " << balance << "$" << endl;
	}
	void display() override {
		cout << "Client's Name: " << name << endl;
		cout << "Client's Balance: " << balance << "$" << endl;
	}
};

