/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:38:36 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/19 22:23:05 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit ) {

	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;

	std::cout << "index:" << Account::getNbAccounts() << ";";
	std::cout << "amount:" << Account::checkAmount() << ";created" << std::endl;
	_accountIndex = Account::_nbAccounts++;


	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;




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

	std::cout	<< "accounts:"
				<< Account::_nbAccounts << ";"

				<< "total:"
				<< Account::getTotalAmount() << ";"

				<< "deposits:"
				<< Account::getNbDeposits() << ";"

				<< "withdrawals:"
				<<Account::getNbWithdrawals();
				std::cout << std::endl;
				// << Account::getTotalAmount()
				// << Account::getNbDeposits()
				// << Account::getNbWithdrawals()
				// << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits = deposit;
	Account::_totalNbDeposits += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > this->_totalAmount)
		return (false);
	Account::_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (Account::_amount);
}

void	Account::displayStatus( void ) const {

}

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
