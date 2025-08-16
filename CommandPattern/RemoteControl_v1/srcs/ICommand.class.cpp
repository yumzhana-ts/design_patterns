/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICommand.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:20:55 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ICommand::ICommand(void) 
{
    if (DEBUG){ std::cout << GREEN << "[ICommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ICommand::~ICommand(void) 
{
    if (DEBUG){std::cout << GREEN << "[ICommand] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/
