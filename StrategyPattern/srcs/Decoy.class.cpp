/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decoy.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:10:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Decoy.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

Decoy::Decoy(void) 
{
    if (DEBUG){ std::cout << GREEN << "[Decoy] Default Constructor called" << RESET_COLOR << std::endl;}
    flyBehavior = new FlyWithoutWings;
    quackBehavior = new Squeak;
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

Decoy::~Decoy(void) 
{
    if (DEBUG){std::cout << GREEN << "[Decoy] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void Decoy::display() 
{
    std::cout << RED << "I am Decoy! " << RESET_COLOR << std::endl;
}
