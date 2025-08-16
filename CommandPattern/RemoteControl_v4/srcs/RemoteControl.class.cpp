/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RemoteControl.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 22:40:29 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RemoteControl.class.hpp"
#include <iomanip>

/****************************************************/
/*                    Constructor                   */
/****************************************************/

RemoteControl::RemoteControl(void) 
{
    if (DEBUG){ std::cout << GREEN << "[RemoteControl] Default Constructor called" << RESET_COLOR << std::endl;}
    for(int i = 0; i < 7; i++)
    {
        onCommand[i] = new NoCommand();
        offCommand[i] = new NoCommand();
    }
    undoCommand = new NoCommand();
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

RemoteControl::~RemoteControl(void) 
{
    for (int i = 0; i < 7; i++)
    {
        delete onCommand[i];
        delete offCommand[i];
    }
    //delete undoCommand;
    if (DEBUG){std::cout << GREEN << "[RemoteControl] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void RemoteControl::setCommand(int slot, ICommand* on, ICommand* off)
{
    onCommand[slot] = on;
    offCommand[slot] = off;
}


void RemoteControl::onButtonWasPushed(int slot)
{
    onCommand[slot]->execute();
    undoCommand = onCommand[slot];
}

void RemoteControl::offButtonWasPushed(int slot)
{
    offCommand[slot]->execute();
    undoCommand = offCommand[slot];
}

void RemoteControl::undoButtonWasPushed()
{
    undoCommand->undo();
}



#include <iomanip>

std::ostream& operator<<(std::ostream& os, RemoteControl* remote) 
{
    size_t maxOnLen = 0, maxOffLen = 0;
    for (size_t i = 0; i < remote->onCommand.size(); i++) {
        maxOnLen  = std::max(maxOnLen,  remote->onCommand[i]->getName().size());
        maxOffLen = std::max(maxOffLen, remote->offCommand[i]->getName().size());
    }

    os << "\n------ Remote Control -------\n";
    os << std::left 
       << std::setw(8)  << "Slot" 
       << std::setw(maxOnLen + 2)  << "On Command" 
       << std::setw(maxOffLen + 2) << "Off Command" 
       << "\n";

    os << std::string(8 + maxOnLen + 2 + maxOffLen + 2, '-') << "\n";

    for (size_t i = 0; i < remote->onCommand.size(); i++) {
        os << std::left
           << std::setw(8)  << ("[" + std::to_string(i) + "]")
           << std::setw(maxOnLen + 2)  << remote->onCommand[i]->getName()
           << std::setw(maxOffLen + 2) << remote->offCommand[i]->getName()
           << "\n";
    }

    os << "\nUndo: " << (remote->undoCommand ? remote->undoCommand->getName() : "None") << "\n";
    return os;
}
