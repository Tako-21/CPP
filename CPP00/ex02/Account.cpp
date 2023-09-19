/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:38:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/19 16:35:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit ) {
	Account::_totalAmount = initial_deposit;
	_accountIndex = Account::_nbAccounts++;
	this->_totalAmount = this->_amount;
	std::cout << _accountIndex << std::endl;
}

Account::~Account( void ) {}

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
	std::cout	<< Account::getNbAccounts() << std::endl;
	// std::cout	<< Account::_accountIndex << std::endl;

				// << Account::getTotalAmount()
				// << Account::getNbDeposits()
				// << Account::getNbWithdrawals()
				// << std::endl;
}

void	Account::makeDeposit( int deposit ) {
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > this->_totalAmount)
		return (false);
	return (true);
}

int		Account::checkAmount( void ) const {
	return (21);

}

void	Account::displayStatus( void ) const {

}

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;