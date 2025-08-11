/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HouseBlend.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 14:58:58 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HouseBlend.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

HouseBlend::HouseBlend(void) 
{
    description = "HouseBlend";
    if (DEBUG){ std::cout << GREEN << "[HouseBlend] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

HouseBlend::~HouseBlend(void) 
{
    if (DEBUG){std::cout << GREEN << "[HouseBlend] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
