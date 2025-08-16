/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NoCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

NoCommand::NoCommand() 
{
    if (DEBUG){ std::cout << GREEN << "[NoCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

NoCommand::~NoCommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[NoCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void NoCommand::execute()
{
    std::cout << "i am doing nothing" << std::endl;
}

void NoCommand::undo()
{
    std::cout << "i am doing nothing" << std::endl;
}