/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlyWithWings.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:10:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlyWithWings.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

FlyWithWings::FlyWithWings(void) 
{
    if (DEBUG){ std::cout << GREEN << "[FlyWithWings] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

FlyWithWings::~FlyWithWings(void) 
{
    if (DEBUG){std::cout << GREEN << "[FlyWithWings] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
