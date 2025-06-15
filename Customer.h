#pragma once
#include "Transaction.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
#include "Accounts.h"
class Customer : public Transaction {
public:
    Account* login(vector<Account>& accounts);

    void checking_menu(Account& acc, vector<Account>& accounts);

    void savings_menu(Account& acc);
};