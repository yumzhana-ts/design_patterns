/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChicagoStyleCheesePizza.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 23:39:14 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChicagoStyleCheesePizza.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(void) 
{
    this->name = "Chicago Style Deep Deish Cheese Pizza";
    this->dough = "Exitra Sick Crust Dough";
    this->sauce = "Plum Tomato Sauce";
    this->toppings.push_back("Shredded Mozzarella Cheese");
    if (DEBUG){ std::cout << GREEN << "[ChicagoStyleCheesePizza] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza(void) 
{
    if (DEBUG){std::cout << GREEN << "[ChicagoStyleCheesePizza] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
