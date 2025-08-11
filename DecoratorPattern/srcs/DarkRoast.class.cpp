/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DarkRoast.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 14:58:58 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DarkRoast.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

DarkRoast::DarkRoast(void) 
{
    description = "DarkRoast";
    if (DEBUG){ std::cout << GREEN << "[DarkRoast] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

DarkRoast::~DarkRoast(void) 
{
    if (DEBUG){std::cout << GREEN << "[DarkRoast] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
