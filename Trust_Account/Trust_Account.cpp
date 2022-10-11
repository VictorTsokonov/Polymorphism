#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate) {}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000){
        amount += 50.0;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    return Savings_Account::withdraw(amount);
}

void Trust_Account::print(std::ostream &os) const {
    os << "[Trust_Account: " << name << ": " << balance << ", " << int_rate << "%]";
}
