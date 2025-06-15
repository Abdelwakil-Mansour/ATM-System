#include "Customer.h"
#include "Transaction.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
#include "Accounts.h"



Account* Customer::login(vector<Account>& accounts) {
    int id;
    string password;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter your ID: "; cin >> id;
        cout << "Enter your Password: "; cin >> password;

        for (auto& acc : accounts) {
            if (acc.id == id && acc.password == password) {
                cout << "welcome \n";
                return &acc;
            }
        }
        cout << "Incorrect  Attempts left: " << 2 - i << "\n";
    }
    return nullptr;
}

void Customer::checking_menu(Account& acc, vector<Account>& accounts) {
    int choice;
    while (true) {
        
        cout << "1. Deposit\n2. Withdraw\n3. Transfer\n4. Change Password\n5. Show Balance\n6. Back\n";
        cout << "Choose: ";

        cin >> choice;
        if (choice == 1) {
            double am; cout << "Amount: "; cin >> am;
            deposit(acc, am);
        }
        else if (choice == 2) {
            double am; cout << "Amount: "; cin >> am;
            withdraw(acc, am);
        }
        else if (choice == 3) {
            int to_acc;
            double am;
            cout << "Enter the account you want to transfer ID: "; cin >> to_acc;
            cout << "Amount: "; cin >> am;
            for (auto& other : accounts) {
                if (other.id == to_acc) {
                    transfer(acc, other, am);
                    break;
                }
            }
        }
        else if (choice == 4) {
            string new_pass;
            cout << "Enter new password: ";
            cin >> new_pass;
            acc.password = new_pass;
            cout << "Password changed.\n";
        }
        else if (choice == 5) {
            cout << "Balance: " << acc.balance << "\n";
        }
        else if (choice == 6) break;
        else cout << "Invalid choice.\n";
    }
}
void Customer::savings_menu(Account& acc) {
    int choice;
    while (true) {
        cout << "1. Deposit\n2. Show Balance\n3. Back\n choose : ";

        cin >> choice;
        if (choice == 1) {
            double am; cout << "Amount: "; cin >> am;
            deposit(acc, am);
        }
        else if (choice == 2) {
            cout << "Balance: " << acc.balance << "\n";
        }
        else if (choice == 3) break;
        else cout << "Invalid choice.\n";
    }
};