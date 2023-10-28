/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:32:27 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 17:09:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZATION__
#define __SERIALIZATION__

# include <stdint.h>

typedef struct	s_Data {
	int	a;
}				Data;

class Serialization {

public:

	Serialization( void );
	~Serialization();
	Serialization ( const Serialization& cpy );
	Serialization& operator= ( const Serialization& cpy );

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

private:

};

#endif /* __SERIALIZATION__ */