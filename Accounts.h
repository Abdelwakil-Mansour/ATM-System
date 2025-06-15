#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;
struct Account
{
	string name;
	int id;
	string password;
	double balance;
	string type;


	Account(string n, int i, string p, string t, double b)
		: name(n), id(i), password(p), type(t), balance(b) {
	}
	
};

