/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IISubject.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/07 18:02:26 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISubject.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ISubject::ISubject(void) 
{
    if (DEBUG){ std::cout << GREEN << "[ISubject] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ISubject::~ISubject(void) 
{
    if (DEBUG){std::cout << GREEN << "[ISubject] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
