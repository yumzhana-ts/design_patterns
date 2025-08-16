/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightOnCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 17:18:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightOnCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

LightOnCommand::LightOnCommand(Light* l) 
{
    this->light = l;
    if (DEBUG){ std::cout << GREEN << "[LightOnCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

LightOnCommand::~LightOnCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[LightOnCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void LightOnCommand::execute()
{
    light->on();
}

void LightOnCommand::undo()
{
    light->off();
}