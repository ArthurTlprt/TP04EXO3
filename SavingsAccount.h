/* 
 * File:   SavingsAccount.h
 * Author: isen
 *
 * Created on 30 septembre 2015, 20:48
 */

#ifndef SAVINGSACCOUNT_H
#define	SAVINGSACCOUNT_H

class SavingsAccount {
public:
    SavingsAccount();
    SavingsAccount(const SavingsAccount& orig);
    virtual ~SavingsAccount();
    void depositAnnualInterest();
    void setAnnualInterestRate(float annualInterestRate);
    float getAnnualInterestRate() const;
private:
    float annualInterestRate;
};

#endif	/* SAVINGSACCOUNT_H */

