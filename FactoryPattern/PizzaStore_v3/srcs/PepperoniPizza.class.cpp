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

PepperoniPizza::PepperoniPizza(IPizzaIngredientFactory *factory) 
{
    this->name = "PepperoniPizza";
    this->ingredientFactory = factory;
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

void PepperoniPizza::prepare() 
{
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}