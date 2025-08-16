/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MacroCommand.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:43:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MacroCommand.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

MacroCommand::MacroCommand(std::vector<ICommand*> &com) 
{
    this->commands = com;
    if (DEBUG){ std::cout << GREEN << "[MacroCommand] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

MacroCommand::~MacroCommand(void) 
{
    for (size_t i = 0; i < commands.size(); i++)
        delete commands[i]; 
    if (DEBUG){std::cout << GREEN << "[MacroCommand] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void MacroCommand::execute()
{
    for (size_t i = 0; i < commands.size(); i++)
    {
        commands[i]->execute();
    }
}

void MacroCommand::undo()
{
    std::cout << "doing nothing" << std::endl;
}