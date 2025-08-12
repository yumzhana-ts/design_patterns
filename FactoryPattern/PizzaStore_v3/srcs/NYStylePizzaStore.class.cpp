/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NYStylePizzaStore.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:59:46 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NYStylePizzaStore.class.hpp"


/****************************************************/
/*                    Constructor                   */
/****************************************************/

NYStylePizzaStore::NYStylePizzaStore() 
{
    if (DEBUG){ std::cout << GREEN << "[NYStylePizzaStore] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

NYStylePizzaStore::~NYStylePizzaStore(void) 
{
    if (DEBUG){std::cout << GREEN << "[NYStylePizzaStore] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

Pizza* NYStylePizzaStore::createPizza(const std::string& type)
{
    Pizza* pizza = NULL;
    IPizzaIngredientFactory* factory;
    factory = new NYPizzaIngredientFactory;
    if (type == "ny_cheese")
        pizza = new CheesePizza(factory);
    /*else if (type == "pepperoni")
        pizza = new PepperoniPizza();*/
    return pizza;
}
