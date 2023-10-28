/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:44:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 15:27:52 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER__
#define __SCALARCONVERTER__

#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <sstream>
#include <iomanip>
#include <string>

class ScalarConverter    {
    
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        
        ScalarConverter       &operator=(ScalarConverter const & src);
        static void           convert(std::string entry);
        static bool           isPLiterals(std::string const & entry);
        static bool           isChar(std::string const & entry);
        static bool           isInt(std::string const & entry);
        static bool           isFloat(std::string const & entry);
        static bool           isDouble(std::string const & entry);
        static int            nbComas(std::string const & entry);
        static int            nbLetters(std::string const & entry);
};

#endif /* __SCALARCONVERTER__ */
