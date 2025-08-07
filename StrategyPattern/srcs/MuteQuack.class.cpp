/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuteQuackQuack.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/07 16:53:50 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MuteQuack.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

MuteQuack::MuteQuack(void) 
{
    if (DEBUG){ std::cout << GREEN << "[MuteQuack] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

MuteQuack::~MuteQuack(void) 
{
    if (DEBUG){std::cout << GREEN << "[MuteQuack] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
