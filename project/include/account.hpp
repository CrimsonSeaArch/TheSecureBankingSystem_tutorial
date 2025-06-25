#include <string>
#include <iostream>
#include "bank.hpp"

using namespace std;

class BankAccount {
  private:
    string accountNumber;
    double balance;

  public:
    BankAccount(string newAccountN, double NewBalance);
    string getAccNumber() const;
    double getBalance() const;
    void setAccNumber(const string& accountNumber);
    void setBalance(double balance);
    class Transaction {
      public:
      double deposit(BankAccount& account, double amount);  
      double withdraw(BankAccount& account, double amount);

    };

};