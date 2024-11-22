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


