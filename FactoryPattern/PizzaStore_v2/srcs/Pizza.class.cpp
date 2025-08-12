/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pizza.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/12 15:45:17 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pizza.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

Pizza::Pizza(void) 
{
    if (DEBUG){ std::cout << GREEN << "[Pizza] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

Pizza::~Pizza(void) 
{
    if (DEBUG){std::cout << GREEN << "[Pizza] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void Pizza::prepare()
{
    std::cout << "Preparing " << this->name << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings: " << std::endl;
    
    for(size_t i = 0; i < toppings.size(); i++)
    {
        std::cout << "-" << toppings[i] << std::endl;
    }
}

void Pizza::bake() 
{
    std::cout << "Bake for 25 minutes at 350" << std::endl;
}

void Pizza::cut() 
{
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}

void Pizza::box() 
{
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
}

std::string Pizza::getName() const 
{
    return name;
}