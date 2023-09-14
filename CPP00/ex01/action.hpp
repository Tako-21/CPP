/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:24 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/14 20:17:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTION_HPP
# define ACTION_HPP

void	addAction( void );
void	searchAction( void );
void	exitAction( void );

class MapAction {
	public :
		std::string	action;
		void		(*pf)();
};

#endif