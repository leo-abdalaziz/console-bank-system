#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validator{
public:
	//these methods will be called inside the setters of the derived classes so we can validate the input
	static bool isValidName(string& name) {
		if (name.length() >= 5 && name.length() <= 20) {
			for (int i = 0; i < name.length() - 1; i++) {
				if (!isalpha(name[i])) {
					return false;
				}
			}
			return true;
		}
		else {
			return false;
		}
	}
	static bool isValidPassword(string& password) {
		if (password.length() >= 8 && password.length() <= 20) {
			return true;
		}
		else {
			return false;
		}
	}
	
};

