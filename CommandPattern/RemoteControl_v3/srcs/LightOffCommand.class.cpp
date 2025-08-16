/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightOffCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LightOffCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

LightOffCommand::LightOffCommand(Light* l) 
{
    this->light = l;
    if (DEBUG){ std::cout << GREEN << "[LightOffCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

LightOffCommand::~LightOffCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[LightOffCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void LightOffCommand::execute()
{
    light->off();
}

void LightOffCommand::undo()
{
    light->on();
}