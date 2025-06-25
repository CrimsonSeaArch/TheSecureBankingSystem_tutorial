#include "bank.hpp"
#include <iostream>


void Bank::createAccount(const std::string& accountNumber, double initialBalance) {
    BankAccount newAcc((accountNumber), initialBalance);
    multiAcc.push_back(newAcc);
};

BankAccount* Bank::findAccount(const std::string& accountNumber) {
    for (BankAccount& acc : multiAcc) {
        if (acc.getAccNumber() == accountNumber) {
            return &acc;
        }
    }
    return nullptr;
}

int Bank::transferMoney(const std::string& fromAccount, const std::string& toAccount, double amount) {
    BankAccount* source = findAccount(fromAccount);
    BankAccount* target = findAccount(toAccount);

    if (!source || !target) {
        return 2; // Account not found
    }

    if (!source->withdraw(amount)) {
        return 3; // Insufficient funds
    }

    target->deposit(amount);
    return 1; // Success
}
