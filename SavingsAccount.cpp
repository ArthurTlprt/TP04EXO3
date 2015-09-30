/* 
 * File:   SavingsAccount.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 20:48
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {
}

void SavingsAccount::setAnnualInterestRate(float annualInterestRate) {
    this->annualInterestRate = annualInterestRate;
}

float SavingsAccount::getAnnualInterestRate() const {
    return annualInterestRate;
}

SavingsAccount::SavingsAccount(const SavingsAccount& orig) {
}

SavingsAccount::~SavingsAccount() {
}

