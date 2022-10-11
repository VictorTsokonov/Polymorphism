#include "Checking_Account.h"

#include <utility>

Checking_Account::Checking_Account(std::string name, double balance) : Account(name, balance) {}

bool Checking_Account::withdraw(double amount) {
    amount += fee;
    return Account::withdraw(amount);
};

//std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
//    os << "[Checking_Account: " << account.name << ": " << account.balance;
//    return os;
//}

double Checking_Account::get_fee() {
    return fee;
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Checking_Account: " << name << ": " << balance << "]";
}


