#ifndef CHALLENGE_INHERITANCE_I_PRINTABLE_H
#define CHALLENGE_INHERITANCE_I_PRINTABLE_H
#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};


#endif //CHALLENGE_INHERITANCE_I_PRINTABLE_H
