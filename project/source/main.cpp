#include <iostream>
#include "bank.hpp"


using namespace std;

int main() {

  BankAccount Stephan("", 0.000);
  Stephan.setAccNumber("666555");
  Stephan.setBalance(20.000);
  
  BankAccount::Transaction StephansTrans;

  StephansTrans.deposit(Stephan, 30.0);
  // Ausgabe

  std::cout << "KontoNummber: " << Stephan.getAccNumber() << "\n";
  std::cout << "KontoStand: " << Stephan.getBalance() << "\n";
  
  // return 0;

  Bank Step;
  Step.createAccount("1001", 5000);
  BankAccount* acc = Step.findAccount("1001");

  if (acc) {
    cout << "Balance: €" << acc->getBalance() << "\n";
  } else {
    cout << "account  not found.\n";
  }


}
