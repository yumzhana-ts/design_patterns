/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarageDoor.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 17:22:15 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GarageDoor.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

GarageDoor::GarageDoor(void) 
{
    if (DEBUG){ std::cout << GREEN << "[GarageDoor] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

GarageDoor::~GarageDoor(void) 
{
    if (DEBUG){std::cout << GREEN << "[GarageDoor] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void GarageDoor::Lighton()
{
    light->on();
   // std::cout << "turning on" << std::endl;
}

void GarageDoor::Lightoff()
{
    light->off();
    //std::cout << "turning off" << std::endl;
}

void GarageDoor::up()
{
    std::cout << "Garage Door up " << std::endl;
}

void GarageDoor::down()
{
    std::cout << "Garage Door down" << std::endl;
}

void GarageDoor::stop()
{
    std::cout << "Garage Door stop" << std::endl;
}