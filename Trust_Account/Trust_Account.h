#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H
#include "../Savings_Account/Savings_Account.h"


class Trust_Account: public Savings_Account{
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance{0.0};
    static constexpr double def_int_rate{0.0};
public:
    explicit Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount) override;
    bool withdraw(double amount) override;
    void print(std::ostream &os) const override;
    ~Trust_Account() override = default;
};


#endif //CHALLENGE_INHERITANCE_TRUST_ACCOUNT_H
