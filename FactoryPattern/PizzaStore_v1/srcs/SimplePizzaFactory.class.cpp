/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimplePizzaFactory.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:18:36 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SimplePizzaFactory.class.hpp"


/****************************************************/
/*                    Constructor                   */
/****************************************************/

SimplePizzaFactory::SimplePizzaFactory(void) 
{
    if (DEBUG){ std::cout << GREEN << "[SimplePizzaFactory] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

SimplePizzaFactory::~SimplePizzaFactory(void) 
{
    if (DEBUG){std::cout << GREEN << "[SimplePizzaFactory] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/


IPizza* SimplePizzaFactory::createPizza(const std::string& type) const 
{
    IPizza* pizza = NULL;

    if (type == "cheese")
        pizza = new CheesePizza();
    else if (type == "pepperoni")
        pizza = new PepperoniPizza();
    return pizza;
}