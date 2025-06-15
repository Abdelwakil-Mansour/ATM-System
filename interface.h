#pragma once
#include <iostream>
#include <vector>
#include "ATM.h"
#include "Admin.h"
#include "accounts.h"
#include "customer.h"
using namespace std;





class interface {
    vector<Account> accounts;
    Admin admin;
    Customer customer;
public:
    interface();

    void display();
};