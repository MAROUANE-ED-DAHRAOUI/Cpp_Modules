#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
int     Account::_totalAmount = 0;

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
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

Account::Account( int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    std::cout << "Index:" << _accountIndex << ";amount:" << _amount << "created\n";
}

Account::Account()
{

}

Account::~Account()
{
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";closed\n";
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

}

int		Account::checkAmount(void) const
{

}

void	Account::displayStatus(void) const
{

}
