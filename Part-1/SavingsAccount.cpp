#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
    interestRate = rate;
}

double SavingsAccount::calculateInterest() {
    Account::setBalance(Account::getBalance() * interestRate);
} 
void SavingsAccount::display(ostream & os) const
{
    os << "Account type: Savings" << endl;
    os << "Balance: $" << Account::getBalance() << endl;
    os << "Interest Rate (%): " << interestRate << endl;
}
