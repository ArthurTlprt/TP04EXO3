/* 
 * File:   CheckingAccount.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 20:48
 */

#ifndef CHECKINGACCOUNT_H
#define	CHECKINGACCOUNT_H

#include "BankAccount.h"
#include "CheckingAccount.h"

class CheckingAccount {
public:
    CheckingAccount();
    CheckingAccount(const CheckingAccount& orig);
    virtual ~CheckingAccount();
    void withdrawal(float amount);
    void transfer(float amount, const BankAccount& otherAccount);
    void setOverdraftLimit(float overdraftLimit);
    float getOverdraftLimit() const;
private:
    float overdraftLimit;
};

#endif	/* CHECKINGACCOUNT_H */

