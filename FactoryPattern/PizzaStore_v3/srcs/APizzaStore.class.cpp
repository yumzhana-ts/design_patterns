/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   APizzaStore.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:59:46 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "APizzaStore.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

APizzaStore::APizzaStore() 
{
    if (DEBUG){ std::cout << GREEN << "[APizzaStore] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

APizzaStore::~APizzaStore(void) 
{
    if (DEBUG){std::cout << GREEN << "[APizzaStore] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

Pizza* APizzaStore::orderPizza(const std::string type)
{
    Pizza* pizza = NULL;
    pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
