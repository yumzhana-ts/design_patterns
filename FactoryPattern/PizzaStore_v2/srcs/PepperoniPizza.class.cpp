/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PepperoniPizza.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:30:05 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PepperoniPizza.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

PepperoniPizza::PepperoniPizza(void) 
{
    this->name = "Peppereoni";
    if (DEBUG){ std::cout << GREEN << "[PepperoniPizza] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

PepperoniPizza::~PepperoniPizza(void) 
{
    if (DEBUG){std::cout << GREEN << "[PepperoniPizza] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
