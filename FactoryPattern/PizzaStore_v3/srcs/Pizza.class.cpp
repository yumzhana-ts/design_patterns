/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pizza.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/12 19:08:14 by ytsyrend         ###   ########.fr       */
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



