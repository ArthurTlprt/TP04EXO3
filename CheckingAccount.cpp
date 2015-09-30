/* 
 * File:   CheckingAccount.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 20:48
 */

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount() {
}

void CheckingAccount::setOverdraftLimit(float overdraftLimit) {
    this->overdraftLimit = overdraftLimit;
}

float CheckingAccount::getOverdraftLimit() const {
    return overdraftLimit;
}

CheckingAccount::CheckingAccount(const CheckingAccount& orig) {
}

CheckingAccount::~CheckingAccount() {
}

