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
  //return account += amount;

}