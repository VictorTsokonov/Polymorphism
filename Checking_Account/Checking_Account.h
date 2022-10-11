#ifndef CHALLENGE_INHERITANCE_CHECKING_ACCOUNT_H
#define CHALLENGE_INHERITANCE_CHECKING_ACCOUNT_H
#include "../Account/Account.h"
#include <iostream>


class Checking_Account: public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance{0.0};
    static constexpr double fee{1.5};
public:
    Checking_Account(std::string name=def_name, double balance = def_balance);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    void print(std::ostream &os) const override;
    static double get_fee();
    virtual ~Checking_Account() = default;

};


#endif //CHALLENGE_INHERITANCE_CHECKING_ACCOUNT_H
