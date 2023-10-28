/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:00:58 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 17:10:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Serialization.hpp"

int	main( void )
{
	Data	data;

	data.a = 21;
	uintptr_t serialized = Serialization::serialize(&data);

	Data	*recov_data;

	recov_data = Serialization::deserialize( serialized );

	std::cout << recov_data->a << std::endl;
}