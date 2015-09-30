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
private:
    int number;
    string owner;
    
    
};

#endif	/* BANKACCOUNT_H */

