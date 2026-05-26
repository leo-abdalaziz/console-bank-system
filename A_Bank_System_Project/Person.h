#pragma once
#include <iostream>
#include <string>
#include "Validator.h"
using namespace std;

class Person{
protected:
	//attributes
	static int id;
	string name;
	string password;
public:
	//default constructor
	Person() {
		id++;
	}
	//the only common method
	virtual void display() = 0;
};

