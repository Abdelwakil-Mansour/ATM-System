#include "Accounts.h"

#include "Transaction.h"
#include <iostream>
#include <string>
using namespace std;



void Transaction::deposit(Account& acc, double amount) {
    acc.balance += amount;
    cout << "Deposited is done successfully. New balance: " << acc.balance << "\n";
}

void Transaction::withdraw(Account& acc, double amount) {
    if (acc.balance >= amount) {
        acc.balance -= amount;
        cout << "Withdrawal is done successfully. New balance: " << acc.balance << "\n";
    }
    else {
        cout << "you dont have this balance \n";
    }
}

void Transaction::transfer(Account& from, Account& to, double amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transfer is done successfully \n";
    }
    else {
        cout << "you dont have this balance \n";
    }
}
