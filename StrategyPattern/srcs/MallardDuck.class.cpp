/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MallardDuck.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:10:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MallardDuck.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

MallardDuck::MallardDuck(void) 
{
    if (DEBUG){ std::cout << GREEN << "[MallardDuck] Default Constructor called" << RESET_COLOR << std::endl;}
    flyBehavior = new FlyWithWings;
    quackBehavior = new Quack;
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

MallardDuck::~MallardDuck(void) 
{
    if (DEBUG){std::cout << GREEN << "[MallardDuck] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void MallardDuck::display() 
{
    std::cout << RED << "I am MallardDuck! " << RESET_COLOR << std::endl;
}
