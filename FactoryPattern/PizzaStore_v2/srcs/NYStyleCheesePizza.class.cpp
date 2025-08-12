/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NYStyleCheesePizza.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 23:39:14 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NYStyleCheesePizza.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

NYStyleCheesePizza::NYStyleCheesePizza(void) 
{
    this->name = "NY Style Sauce and Cheese Pizza";
    this->dough = "Thin Crust Dough";
    this->toppings.push_back("Grated Reggiano Cheese");
    if (DEBUG){ std::cout << GREEN << "[NYStyleCheesePizza] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

NYStyleCheesePizza::~NYStyleCheesePizza(void) 
{
    if (DEBUG){std::cout << GREEN << "[NYStyleCheesePizza] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
