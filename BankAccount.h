/* 
 * File:   BankAccount.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 20:45
 */

#ifndef BANKACCOUNT_H
#define	BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
public:
    BankAccount();
    BankAccount(const BankAccount& orig);
    virtual ~BankAccount();
    void deposit(float amount);
    void withdrawal(float amount);
    void setBalance(float balance);
    float getBalance() const;
    void setOwner(string owner);
    string getOwner() const;
    void setNumber(int number);
    int getNumber() const;
private:
    int number;
    string owner;
    float balance;
};

#endif	/* BANKACCOUNT_H */

