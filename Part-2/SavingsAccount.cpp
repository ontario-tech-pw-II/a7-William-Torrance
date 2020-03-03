#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
    interestRate = rate; // percentage
}

double SavingsAccount::calculateInterest() {
    return Account::getBalance() * interestRate;
} 
void SavingsAccount::display(ostream & os) const
{
    cout << "Account type: Saving" << endl;
    cout << "Balance: $" << Account::getBalance() << endl;
    cout << "Interest Rate (%): " << interestRate << endl;
}
