#include <vector>
#include "account.hpp"

class Bank {
  private:
   std::vector<BankAccount> multiAcc;

  public:
   
   void createAccount(const std::string& accountNumber, double initialBalance);
   BankAccount* findAccount(const std::string& accountNumber);
   int transferMoney(const std::string& fromAccount, const std::string& toAccount, double amount);


};