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
}
