/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:06:35 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/19 15:23:55 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// initializing memory for private attributes
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


//Constructor & destructor

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits= 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" 
				<< "amount:" << _amount << ";"
			   	<< "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";" 
		<< "closed" << std::endl;
}

// Private methods

void Account::_displayTimestamp(void)
{
	std::time_t	current_time = std::time(NULL);
	std::tm *	local = localtime(&current_time);

	std::cout << std::setfill('0')
	   		<< "[" << local->tm_year + 1900 
			<< std::setw(2) << local->tm_mon 
			<< std::setw(2) << local->tm_mday << "_" 
			<< std::setw(2) << local->tm_hour 
			<< std::setw(2) << local->tm_min 
			<<std::setw(2) << local->tm_sec 
			<< "] " << std::flush;
}

// Public methods

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			<< "total:" << _totalAmount << ";"
			<< "deposits:" << _totalNbDeposits << ";"
			<< "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";" 
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";"
		<< "deposit:" << deposit << ";" << std::flush;
	_amount += deposit;
	std::cout << "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "withdrawal:" << std::flush;
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";" << "amount:" << _amount << ";"
		<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);	
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
