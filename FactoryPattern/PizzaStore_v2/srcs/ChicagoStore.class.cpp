/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChicagoStore.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:59:46 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChicagoStore.class.hpp"


/****************************************************/
/*                    Constructor                   */
/****************************************************/

ChicagoStore::ChicagoStore() 
{
    if (DEBUG){ std::cout << GREEN << "[ChicagoStore] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ChicagoStore::~ChicagoStore(void) 
{
    if (DEBUG){std::cout << GREEN << "[ChicagoStore] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

Pizza* ChicagoStore::createPizza(const std::string& type)
{
    Pizza* pizza = NULL;

    if (type == "cg_cheese")
        pizza = new ChicagoStyleCheesePizza();
    else if (type == "pepperoni")
        pizza = new PepperoniPizza();
    return pizza;
}
