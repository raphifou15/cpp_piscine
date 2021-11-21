/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 23:21:47 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/20 23:21:53 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    this->_accountIndex = this->getNbAccounts();
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    return ;
}

Account::~Account(void)
{
     std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return ;
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    return ;
}

void    Account::displayStatus(void) const
{
    std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}

void    Account::makeDeposit(int deposit)
{
    if (this->_accountIndex == 0)
        Account::_totalAmount = 0;
    this->_nbDeposits = 0;
    if (deposit > 0)
    {
        this->_nbDeposits = 1;
        Account::_totalNbDeposits++;
    }
    int p_amount = this->_amount;
    this->_amount += deposit;
     Account::_totalAmount += this->_amount;
    std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" <<  deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (this->_accountIndex == 0)
        Account::_totalAmount = 0;
    int  p_amount = this->_amount;
    if (withdrawal > this->_amount)
    {
        Account::_totalAmount += this->_amount;
        this->_nbWithdrawals = 0;
        std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
    }
    else
    {

        this->_nbWithdrawals = 1;
        this->_amount -= withdrawal;
        Account::_totalAmount += this->_amount;
        Account::_totalNbWithdrawals += 1;
        std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }

    if  (this->_nbWithdrawals == 0)
        return (false);
    return (true);
}