#include "interface.h"
#include <iostream>
#include <vector>
#include "ATM.h"
#include "Admin.h"
#include "accounts.h"
#include "customer.h"
using namespace std;
interface::interface() {
    
    accounts.emplace_back("user1", 123, "cpp", "savings", 10000);// default customer;
}

void interface::display() {
    while (true) {
        cout << "1. Admin Mode\n2. Customer Mode\n3. Exit\n";
        cout << "Choose: ";
        int choice;
        cin >> choice;
        if (choice == 1) {
            if (admin.login()) {
                int achoice;
                while (true) {
                    
                    cout << "\n1. Add Account\n2. Delete Account\n3. Back\n";
                    cout << "choose : ";

                    cin >> achoice;
                    if (achoice == 1) admin.add_account(accounts);
                    else if (achoice == 2) admin.delete_account(accounts);
                    else break;
                }
            }
            else {
                cout << "failed to login\n";
                break;
            }
        }
        else if (choice == 2) {
            Account* acc = customer.login(accounts);
            if (acc == nullptr) {
                cout << "failed to login\n";
                break;
            }
            if (acc->type == "checking")
                customer.checking_menu(*acc, accounts);
            else if (acc->type == "savings")
                customer.savings_menu(*acc);
            else
                cout << "Invalidtype\n";
        }
        else if (choice == 3) {
            cout << "thanks for using our atm \n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
}