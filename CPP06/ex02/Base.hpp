/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:14:32 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 17:34:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE__
#define __BASE__

# include <iostream>
# include <time.h>
# include <stdlib.h>

class Base {

public:

	virtual ~Base( void ) {}
	
	Base	*generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

private:
};

#endif /* __BASE__ */