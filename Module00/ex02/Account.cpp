#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;
int     Account::_totalAmount = 0;

static int	getNbAccounts( void )
{
    return (_nbAccounts);
}

static int	getTotalAmount( void )
{
    return (_totalAmount);
}

static int	getNbDeposits( void )
{
    return (_totalNbDeposits);
}

static int	getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

static void	displayAccountsInfos( void )
{
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

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}
