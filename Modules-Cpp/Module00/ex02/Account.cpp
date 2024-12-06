#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
int     Account::_totalAmount = 0;

Account::Account( int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    std::cout << " Index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::Account()
{

}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";closed\n";
}

void Account::_displayTimestamp() 
{
    std::time_t now = std::time(NULL);
    std::tm *localTime = std::localtime(&now);
    std::cout << "[" << (localTime->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << localTime->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << localTime->tm_hour
              << std::setw(2) << std::setfill('0') << localTime->tm_min
              << std::setw(2) << std::setfill('0') << localTime->tm_sec << "]";
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit)
{
        int previousAmount = _amount;
        _amount += deposit;
        _nbDeposits++;
        _totalAmount += deposit;
        _totalNbDeposits++;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex;
        std::cout << ";p_amount:" << previousAmount;
        std::cout << ";deposit:" << deposit;
        std::cout << ";amount:" << _amount << ";nb_deposits" << _nbDeposits;
        std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    int prev_amount = 0;
    if (_amount >= withdrawal)
    {
        prev_amount = _amount;
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount = withdrawal;
        _totalNbWithdrawals++;
        std::cout << " index:" << _accountIndex 
                  << ";p_amount:" << prev_amount 
                  << ";withdrawal:" << withdrawal 
                  << ";amount:" << _amount 
                  << ";nb_withdrawals:" << _nbWithdrawals << "\n";
        return true;
    }
    else{
            std::cout << " index:" << _accountIndex 
                  << ";p_amount:" << _amount 
                  << ";withdrawal:refused\n";
        return false;
    }

}

int		Account::checkAmount(void) const
{
    return (_amount);
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";deposits:" << _nbDeposits 
              << ";withdrawals:" << _nbWithdrawals << "\n";
}
