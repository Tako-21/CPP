/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:38:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 12:01:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <iomanip>

static void	display_time(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    // month starts at 0;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
    std::cout << "] ";
}

Account::Account( int initial_deposit ) {

	display_time();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;

	_accountIndex = Account::_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";created" << std::endl;
}

Account::~Account( void ) {
	
	display_time();
	std::cout	<< "index:"
				<< this->_accountIndex << ";"

				<< "amount:"
				<< this->_amount + this->_nbDeposits - this->_nbWithdrawals << ";"

				<< "closed"
				<< std::endl;
}

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	
	display_time();
	std::cout	<< "accounts:"
				<< Account::_nbAccounts << ";"

				<< "total:"
				<< Account::getTotalAmount() << ";"

				<< "deposits:"
				<< Account::getNbDeposits() << ";"

				<< "withdrawals:"
				<<Account::getNbWithdrawals()
				
				<< std::endl;
}

void	Account::displayStatus( void ) const {
	
	display_time();
	std::cout	<< "index:"
				<< this->_accountIndex << ";"

				<< "amount:"
				<< this->_amount + this->_nbDeposits - this->_nbWithdrawals<< ";";

	std::cout	<< "deposits:";
	if (this->_nbDeposits)
		std::cout << "1";
	else
		std::cout << "0";
	std::cout << ";";
	if (this->_nbWithdrawals > 0)
		std::cout	<< "withdrawals:"
					<< "1";
	else
		std::cout	<< "withdrawals:"
					<< "0";
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	// std::cout << "DEPOSIT : " << deposit << std::endl;
	display_time();
	this->_nbDeposits = deposit;
	Account::_totalNbDeposits++;
	this->_totalAmount += deposit;
	std::cout	<< "index:"
				<< this->_accountIndex << ";"

				<< "p_amount:"
				<< this->_amount << ";"

				<< "deposit:"
				<< deposit << ";"
				
				<< "amount:"
				<< this->_amount + deposit << ";"
				
				<< "nb_deposits:"
				<< "1"
				
				<< std::endl;
				
}

bool	Account::makeWithdrawal( int withdrawal ) {
	
	display_time();
	if (withdrawal > this->_amount + this->_nbDeposits)
	{
		std::cout	<< "index:"
					<< this->_accountIndex << ";"	
					<< "p_amount:"
					<< this->_amount + this->_nbDeposits << ";"	
					<< "withdrawal:refused"

					<< std::endl;

		return (false);
	}
	this->_nbWithdrawals = withdrawal;
	Account::_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;

	std::cout	<< "index:"
				<< this->_accountIndex << ";"	
				<< "p_amount:"
				<< this->_amount + this->_nbDeposits << ";"	
				<< "withdrawal:"
				<< withdrawal << ";"

				<< "amount:"
				<< this->_amount + this->_nbDeposits - withdrawal << ";"

				<< "nb_withdrawals:"
				<< "1"

				<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	// this->_amount = 
	return (Account::_amount);
}

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
