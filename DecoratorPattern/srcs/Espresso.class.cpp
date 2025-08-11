/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Espresso.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 15:33:12 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Espresso.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

Espresso::Espresso(void) 
{
    description = "Espresso";
    if (DEBUG){ std::cout << GREEN << "[Espresso] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

Espresso::~Espresso(void) 
{
    if (DEBUG){std::cout << GREEN << "[Espresso] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
