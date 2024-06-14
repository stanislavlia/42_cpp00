#include <iostream>
#include "Account.hpp"

//Define static member vars to
// keep global info about accounts
int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;


Account::Account()
{
    //global data
    _nbAccounts++;

    //local data
    this->_accountIndex = _nbAccounts - 1;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    //pring log
    this->_displayTimestamp();
    std::cout << "index: " << this->_accountIndex << 
    ";amount:" << this->_amount << ";created" << std::endl;


};

Account::Account(int initial_deposit)
{
    //global data
    _nbAccounts++;
    _totalAmount = _totalAmount + initial_deposit;
    _totalNbDeposits++;

    //local data
    this->_accountIndex = _nbAccounts - 1;
    this->_amount = initial_deposit;
    this->_nbDeposits++;
    this->_nbWithdrawals = 0;    

    //pring log
    this->_displayTimestamp();
    std::cout << "index: " << this->_accountIndex << 
    ";amount:" << this->_amount << ";created" << std::endl;
};



void Account::_displayTimestamp()
{
    std::cout << "[19920104_091532] ";
};


int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount() 
{
    return _totalAmount;
}

int Account::getNbDeposits() 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() 
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::checkAmount() const
{
    return this->_amount;
};

void Account::makeDeposit(int deposit)
{
    int old_amount = this->_amount;;

    _nbDeposits++;
    this->_nbDeposits++;

    _totalAmount = _totalAmount + deposit;
    this->_amount = this->_amount + deposit;

    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";p_amount:" << old_amount
              << ";deposit:" << deposit
              << ";amount:" << this->_amount
              << ";nb_deposits:"<< this->_nbDeposits << std::endl;

}

bool Account::makeWithdrawal(int withdrawal)
{
    int old_amount = this->_amount;

    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";p_amount:" << old_amount
              << ";withdrawal:";
    
    if (withdrawal > this->checkAmount())
    {
       std::cout << "refused" << std::endl;
       return false;
    }
    _totalNbWithdrawals++;
    this->_nbWithdrawals++;

    _totalAmount = _totalAmount - withdrawal;
    this->_amount = this->_amount - withdrawal;

    std::cout << withdrawal
    << ";amount:" << this->_amount
    << ";nb_withdrawals:" << this->_nbWithdrawals;

    return true;        
};

void Account::displayStatus() const
{ 
    
}