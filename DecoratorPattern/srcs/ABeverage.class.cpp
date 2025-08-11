/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABeverage.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 14:51:34 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABeverage.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ABeverage::ABeverage(void) 
{
    if (DEBUG){ std::cout << GREEN << "[ABeverage] Default Constructor called" << RESET_COLOR << std::endl;}
    description = "Unknown Beverage";
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ABeverage::~ABeverage(void) 
{
    if (DEBUG){std::cout << GREEN << "[ABeverage] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
