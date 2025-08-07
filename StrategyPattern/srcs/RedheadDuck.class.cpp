/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedheadDuck.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:10:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RedheadDuck.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/


RedheadDuck::RedheadDuck() 
{
    if (DEBUG){ std::cout << GREEN << "[RedheadDuck] Default Constructor called" << RESET_COLOR << std::endl;}
    flyBehavior = new FlyWithWings;
    quackBehavior = new Quack;
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

RedheadDuck::~RedheadDuck(void) 
{
    if (DEBUG){std::cout << GREEN << "[RedheadDuck] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void RedheadDuck::display() 
{
    std::cout << RED << "I am RedheadDuck! " << RESET_COLOR << std::endl;
}