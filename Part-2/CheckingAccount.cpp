
#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
    transactionFee = fee;
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
    Account::credit(amount);
    chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
    if(!Account::debit(amount)){return false;}
    chargeFee();
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
    Account::setBalance(Account::getBalance() - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
    cout << "Account type: Checking " << endl;
    cout << "Balance: $" << Account::getBalance() << endl;
    cout << "Transaction Fee: " << transactionFee << endl;
}
