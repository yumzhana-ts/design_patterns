/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CeilingFanHighCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CeilingFanHighCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* l) 
{
    this->ceilingFan = l;
    if (DEBUG){ std::cout << GREEN << "[CeilingFanHighCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

CeilingFanHighCommand::~CeilingFanHighCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[CeilingFanHighCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void CeilingFanHighCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->high();
    std::cout << "Current speed: " << ceilingFan->getSpeed() << std::endl;
}

void CeilingFanHighCommand::undo() 
{
    if (prevSpeed == ceilingFan->HIGH)
        ceilingFan->high();
    else if (prevSpeed == ceilingFan->MEDIUM)
        ceilingFan->medium();
    else if (prevSpeed == ceilingFan->LOW)
        ceilingFan->low();
    else if (prevSpeed == ceilingFan->OFF)
        ceilingFan->off();
}

/****************************************************/
/*              CeilingFanMediumCommand             */
/****************************************************/

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* l)
{
    this->ceilingFan = l;
    if (DEBUG){ std::cout << GREEN << "[CeilingFanMediumCommand] Constructor called" << RESET_COLOR << std::endl;}
}

CeilingFanMediumCommand::~CeilingFanMediumCommand(void)
{
    if (DEBUG){ std::cout << GREEN << "[CeilingFanMediumCommand] Destructor called" << RESET_COLOR << std::endl;}
}

void CeilingFanMediumCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
    std::cout << "Current speed: " << ceilingFan->getSpeed() << std::endl;
}

void CeilingFanMediumCommand::undo()
{
    if (prevSpeed == ceilingFan->HIGH)
        ceilingFan->high();
    else if (prevSpeed == ceilingFan->MEDIUM)
        ceilingFan->medium();
    else if (prevSpeed == ceilingFan->LOW)
        ceilingFan->low();
    else if (prevSpeed == ceilingFan->OFF)
        ceilingFan->off();
}

/****************************************************/
/*               CeilingFanOffCommand               */
/****************************************************/

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* l)
{
    this->ceilingFan = l;
    if (DEBUG){ std::cout << GREEN << "[CeilingFanOffCommand] Constructor called" << RESET_COLOR << std::endl;}
}

CeilingFanOffCommand::~CeilingFanOffCommand(void)
{
    if (DEBUG){ std::cout << GREEN << "[CeilingFanOffCommand] Destructor called" << RESET_COLOR << std::endl;}
}

void CeilingFanOffCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
    std::cout << "Current speed: " << ceilingFan->getSpeed() << std::endl;
}

void CeilingFanOffCommand::undo()
{
    if (prevSpeed == ceilingFan->HIGH)
        ceilingFan->high();
    else if (prevSpeed == ceilingFan->MEDIUM)
        ceilingFan->medium();
    else if (prevSpeed == ceilingFan->LOW)
        ceilingFan->low();
    else if (prevSpeed == ceilingFan->OFF)
        ceilingFan->off();
}