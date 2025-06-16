#include "account.hpp"

BankAccount::BankAccount(string newAccountN, double newBalance) {
  accountNumber = newAccountN;
  balance = newBalance;
}
string BankAccount::getAccNumber() const {

  return accountNumber;
}
double BankAccount::getBalance() const {

  return balance;
      
}

void BankAccount::setAccNumber(const string& number) {
  accountNumber = number;

}

void BankAccount::setBalance(double number) {

  balance = number;

}

double BankAccount::Transaction::deposit(BankAccount& account, double amount) {
  if (amount <= 0) {
    std::cout << "invalid transaction " << amount << "\n";
    return account.getBalance();
  }
  double newBalance = account.getBalance() + amount;
  account.setBalance(newBalance);
  std::cout << "Deposit: " << amount << " €" << "\n";
  std::cout << "New Deposit: " << newBalance << " €" << "\n";
  return newBalance;

}

double BankAccount::Transaction::withdraw(BankAccount& account, double amount) {
  if (amount <= 0) {
    std::cout << "invalid Amount: " << amount << "\n";
    return account.getBalance();
  }
  if (amount > account.getBalance()) {
    std::cout << "Transaction aborted, not enouth credit: " << "\n"; return account.getBalance();
  }
  double newBalance = account.getBalance() - amount;
  account.setBalance(newBalance);
  std::cout << "Withdrawal: " << amount << " €" << "\n";
  std::cout << "New balance: " << newBalance << " €" << "\n";
  return newBalance;
}