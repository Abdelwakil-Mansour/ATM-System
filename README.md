
# 🏧 ATM System in C++

## Overview

This is a console-based **ATM Management System** written in C++. It simulates basic banking functionalities for **Admin** and **Customer** users. The system supports two types of accounts: **Checking** and **Savings**, and operates through a structured, object-oriented approach using inheritance.

---

## 🔧 Features

### 🛠 Admin Mode
- Password-protected login (3 attempts max)
- Add new accounts (up to 100 max)
- Delete existing accounts by ID

### 👤 Customer Mode
- Login using ID and password (3 attempts max)
- **Checking Account**:
  - Deposit
  - Withdraw
  - Transfer money to another account
  - Change password
  - View balance
- **Savings Account**:
  - Deposit
  - View balance

### 🔁 Persistent Run Loop
- System keeps running until the user chooses to exit.
- One default customer is preloaded for testing.

---

## 🧱 Project Structure

- `Account`: Struct representing user data.
- `Transaction`: Base class for deposit, withdraw, transfer operations.
- `Admin`: Inherits from nothing. Can manage accounts.
- `Customer`: Inherits from `Transaction`. Can interact with account features.
- `ATMSystem`: Core class containing all logic and the main program loop.

---

## 💻 Usage

### ✅ Requirements
- C++17-compatible compiler (e.g., `g++` or MSVC)

### 🔄 Compilation

```bash
g++ -o atm main.cpp
```

### ▶️ Run

```bash
./atm
```

---

## 🧪 Default Account

| Field      | Value         |
|------------|---------------|
| Name       | customer1     |
| ID         | 1001          |
| Password   | pass          |
| Type       | checking      |
| Balance    | 500.0         |

---

## 🔐 Admin Password

> **253148** (hardcoded)

---

## 📌 Notes

- Input is taken from the terminal using `cin`.
- All password entries are in plain text.
- File persistence is **not** included (memory-based only).
- The system can be extended easily to include file I/O or encryption.

---

## 🚀 Future Improvements
- Save/load accounts from a file.
- Encrypt passwords.
- Better input validation.
- GUI or web-based front end.
