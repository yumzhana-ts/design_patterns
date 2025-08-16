/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StereoOffWithCDCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StereoOffWithCDCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

StereoOffWithCDCommand::StereoOffWithCDCommand(Stereo* s) 
{
    this->stereo = s;
    if (DEBUG){ std::cout << GREEN << "[StereoOffWithCDCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

StereoOffWithCDCommand::~StereoOffWithCDCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[StereoOffWithCDCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void StereoOffWithCDCommand::execute()
{
    stereo->off();
}

void StereoOffWithCDCommand::undo()
{
    stereo->on();
}