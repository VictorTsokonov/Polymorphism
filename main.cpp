// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account/Savings_Account.h"
#include "Utils/Account_Util.h"
#include "Trust_Account/Trust_Account.h"
#include "Checking_Account/Checking_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Savings

    vector<Account *> sav_accounts;
    Account *sa1 = new Savings_Account("Superman" , 0.0 , 60 );
    Account *sa2 = new Savings_Account("Batman", 2000 );
    Account *sa3 = new Savings_Account("Wonder woman", 5000, 5.0 );
    Account *sa4 = new Savings_Account( );

    sav_accounts.emplace_back(sa1);
    sav_accounts.emplace_back(sa2);
    sav_accounts.emplace_back(sa3);
    sav_accounts.emplace_back(sa4);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking

    vector<Account *> cv_accounts;
    Account *ca1 = new Checking_Account("Superman" , 0.0 );
    Account *ca2 = new Checking_Account("Batman", 2000 );
    Account *ca3 = new Checking_Account("Wonder woman", 5000);
    Account *ca4 = new Checking_Account( );

    cout << *ca1 << endl;

    cv_accounts.emplace_back(ca1);
    cv_accounts.emplace_back(ca2);
    cv_accounts.emplace_back(ca3);
    cv_accounts.emplace_back(ca4);

    display(cv_accounts);
    deposit(cv_accounts, 1000);
    withdraw(cv_accounts, 2000);

    // Trust

    vector<Account *> tv_accounts;
    Account *ta1 = new Trust_Account("Superman" , 0.0 );
    Account *ta2 = new Trust_Account("Batman", 2000, 4.0 );
    Account *ta3 = new Trust_Account("Wonder woman", 5000, 23);
    Account *ta4 = new Trust_Account( );

    tv_accounts.emplace_back(ta1);
    tv_accounts.emplace_back(ta2);
    tv_accounts.emplace_back(ta3);
    tv_accounts.emplace_back(ta4);

    display(tv_accounts);
    deposit(tv_accounts, 5000);
    withdraw(tv_accounts, 2000);

    return 0;
}

