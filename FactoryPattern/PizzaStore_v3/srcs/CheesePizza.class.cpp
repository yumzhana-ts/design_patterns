/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheesePizza.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:30:05 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CheesePizza.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

CheesePizza::CheesePizza(IPizzaIngredientFactory *factory) 
{
    this->name = "Cheese Pizza";
    this->ingredientFactory = factory;
    if (DEBUG){ std::cout << GREEN << "[CheesePizza] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

CheesePizza::~CheesePizza(void) 
{
    if (DEBUG){std::cout << GREEN << "[CheesePizza] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void CheesePizza::prepare() 
{
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
}