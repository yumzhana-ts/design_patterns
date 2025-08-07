/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IQuackable.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:10:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IQuackable.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

IQuackable::IQuackable(void) 
{
    if (DEBUG){ std::cout << GREEN << "[IQuackable] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

IQuackable::~IQuackable(void) 
{
    if (DEBUG){std::cout << GREEN << "[IQuackable] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
