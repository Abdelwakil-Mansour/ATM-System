#pragma once
#include <iostream>
#include <string>
#include "customer.h"
#include "Accounts.h"
#include <vector>

using namespace std;

class Admin 
    
{
public:
    const int admin_password = 253148;
    //void check_password();
    void add_account(vector<Account>& accs);
    bool login();
    void delete_account(vector<Account>& accounts);
  
};