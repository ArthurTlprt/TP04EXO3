/* 
 * File:   BankAccount.cpp
 * Author: isen
 * 
 * Created on 30 septembre 2015, 20:45
 */

#include "BankAccount.h"

BankAccount::BankAccount() {
}

void BankAccount::setBalance(float balance) {
    this->balance = balance;
}

float BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setOwner(string owner) {
    this->owner = owner;
}

string BankAccount::getOwner() const {
    return owner;
}

void BankAccount::setNumber(int number) {
    this->number = number;
}

int BankAccount::getNumber() const {
    return number;
}

BankAccount::BankAccount(const BankAccount& orig) {
}

BankAccount::~BankAccount() {
}

