#include "Admin.h"
#include <iostream>
#include <string>
#include "customer.h"
#include "Accounts.h"
#include <vector>
using namespace std;

bool Admin::login() {
    int input;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter admin password: ";
        cin >> input;
        if (input == admin_password) return true;
    }
    return false;
}

void Admin::add_account(vector<Account>& accounts) {
    if (accounts.size() >= 100) {
        cout << "Sorry we have a full number of accs\n";
        return;
    }
    string name, password, type;
    int id;
    double balance;
    cout << "Enter the name: "; cin >> name;
    cout << "Enter ID: "; cin >> id;
    cout << "Enter the password: "; cin >> password;
    cout << "Enter the account type (checking/savings): "; cin >> type;
    cout << "Enter balance: "; cin >> balance;

    accounts.emplace_back(name, id, password, type, balance);
    cout << "Account added successfully.\n";
}

void Admin::delete_account(vector<Account>& accounts) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    for (auto it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->id == id) {
            accounts.erase(it);
            cout << "Account deleted successfully.\n";
            return;
        }
    }
    cout << "there is no account with this name\n";
}