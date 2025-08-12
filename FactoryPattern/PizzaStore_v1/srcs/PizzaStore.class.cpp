/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PizzaStore.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:59:46 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PizzaStore.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

PizzaStore::PizzaStore(SimplePizzaFactory &fact) 
{
    this->factory = fact;
    if (DEBUG){ std::cout << GREEN << "[PizzaStore] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

PizzaStore::~PizzaStore(void) 
{
    if (DEBUG){std::cout << GREEN << "[PizzaStore] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

IPizza* PizzaStore::orderPizza(const std::string type)
{
    IPizza* pizza = NULL;
    pizza = factory.createPizza(type);
    std::cout << pizza->getName() << " ";
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}