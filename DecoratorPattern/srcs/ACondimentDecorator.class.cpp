/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACondimentDecorator.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 15:30:34 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ACondimentDecorator.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ACondimentDecorator::ACondimentDecorator(void) 
{
    if (DEBUG){ std::cout << GREEN << "[ACondimentDecorator] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ACondimentDecorator::~ACondimentDecorator(void) 
{
    if (DEBUG){std::cout << GREEN << "[ACondimentDecorator] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
