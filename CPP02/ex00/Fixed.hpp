/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:01:09 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/26 16:06:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FIXED_HPP__
#define __FIXED_HPP__

class Fixed {


public:

	Fixed( void );
	~Fixed( void );
	Fixed( const Fixed& );
	Fixed& operator=( const Fixed& fixed );
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int			_fixed_point_value;
	static int	_frc_bits;
};

#endif /* __FIXED_HPP__ */