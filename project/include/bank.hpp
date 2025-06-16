#include <vector>
#include "account.hpp"

class Bank {
  private:
   std::vector<BankAccount> multiAcc;

  public:
   Bank();
   void createAccount(const BankAccount& account);

};