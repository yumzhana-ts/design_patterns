/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CeilingFan.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 17:04:37 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CeilingFan.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

CeilingFan::CeilingFan(std::string location)
{
    this->location = location;
    speed = OFF;
    if (DEBUG){ std::cout << GREEN << "[CeilingFan] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

CeilingFan::~CeilingFan(void) 
{
    if (DEBUG){std::cout << GREEN << "[CeilingFan] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void CeilingFan::high() 
{
    speed = HIGH;
}

void CeilingFan::medium() 
{
    speed = MEDIUM;
}

void CeilingFan::low() 
{
    speed = LOW;
}

void CeilingFan::off() 
{
    speed = OFF;
}

int CeilingFan::getSpeed() const 
{
    return speed;
}

