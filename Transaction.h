#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;
#include "Accounts.h"
class Transaction
{
private:
	double balance;


public :
	void deposit(Account& acc, double amount);
	//double check_balance();
	void withdraw(Account& acc, double amount);
	void transfer(Account& from, Account& to, double amount);
	//void change_password();
};

