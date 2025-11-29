# 🏦 Bank Account System

This is a simple banking system built in C++ to demonstrating strong understanding of OOP principles. It simulates basic banking operations like creating accounts, managing customers, and tracking transactions.

---

## 📌 Features

- Add and delete customers
- Create and delete bank accounts
- Deposit and withdraw money
- Check account balance
- View transaction history
- Auto-generated account and customer IDs
- Support for multiple accounts per customer

---

## 🧠 Concepts Used

- Classes & Objects
- Encapsulation
- Composition
- Static Members
- Operator Overloading
- Vectors and Loops

---

## 🏗️ Project Structure

The project follows a modular architecture (Header/Source file separation):

```text
BankSystem/
├── 📂 src
│   ├── Bank.cpp           # System logic & orchestration
│   ├── BankAccount.cpp    # Account operations
│   ├── Customer.cpp       # Customer data management
│   ├── Transaction.cpp    # Logging mechanism
│   └── main.cpp           # Entry point & interactive menu
├── 📂 include
│   ├── Bank.h
│   ├── BankAccount.h
│   ├── Customer.h
│   └── Transaction.h
└── README.md
---
---
## 🚀 How to Run

1. Make sure all project files are in one folder
2. Open the project in any C++ IDE (e.g., Code::Blocks, Visual Studio)
3. Run `main.cpp`
4. Follow the interactive menu to perform operations

## 🔮 Future Improvements
Implement File Handling to save data permanently.

Add an Admin Login system.

Refactor to use Smart Pointers for better memory safety.
