/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimpleRemoteControl.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:56:40 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SimpleRemoteControl.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

SimpleRemoteControl::SimpleRemoteControl(void) 
{
    if (DEBUG){ std::cout << GREEN << "[SimpleRemoteControl] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

SimpleRemoteControl::~SimpleRemoteControl(void) 
{
    if (DEBUG){std::cout << GREEN << "[SimpleRemoteControl] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void SimpleRemoteControl::setCommend(ICommand* command)
{
    this->slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    this->slot->execute();
}