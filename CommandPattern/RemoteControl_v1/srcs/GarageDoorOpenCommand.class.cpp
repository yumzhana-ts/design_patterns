/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarageDoorOpenCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GarageDoorOpenCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* door) 
{
    this->garageDoor = door;
    if (DEBUG){ std::cout << GREEN << "[GarageDoorOpenCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

GarageDoorOpenCommand::~GarageDoorOpenCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[GarageDoorOpenCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void GarageDoorOpenCommand::execute()
{
    garageDoor->up();
}