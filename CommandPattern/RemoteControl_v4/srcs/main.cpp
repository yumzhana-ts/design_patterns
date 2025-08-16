/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/16 20:29:29 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICommand.class.hpp"
#include "Light.class.hpp"
#include "Stereo.class.hpp"
#include "LightOnCommand.class.hpp"
#include "LightOffCommand.class.hpp"
#include "RemoteControl.class.hpp"
#include "GarageDoor.class.hpp"
#include "GarageDoorOpenCommand.class.hpp"
#include "StereoOnWithCDCommand.class.hpp"
#include "StereoOffWithCDCommand.class.hpp"
#include "CeilingFanHighCommand.class.hpp"
#include "CeilingFanHighCommand.class.hpp"
#include "MacroCommand.class.hpp"

int main() 
{
    CeilingFan* ceilingFan = new CeilingFan("Living Room");
    CeilingFanMediumCommand* ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
    CeilingFanHighCommand* ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
    CeilingFanOffCommand* ceilingFanHighOff = new CeilingFanOffCommand(ceilingFan);
    CeilingFanOffCommand* ceilingFanMediumOff = new CeilingFanOffCommand(ceilingFan);
    
    std::vector<ICommand*> partyOn;
    std::vector<ICommand*> partyOff;

    partyOn.push_back(ceilingFanHigh);
    partyOn.push_back(ceilingFanMedium);
    partyOff.push_back(ceilingFanHighOff);
    partyOff.push_back(ceilingFanMediumOff);
    MacroCommand* partyOnMacro =  new MacroCommand(partyOn);
    MacroCommand* partyOffMacro = new MacroCommand(partyOff);
    partyOnMacro->execute();
    partyOffMacro->execute();
    delete ceilingFan;
    delete ceilingFanHigh;
    delete ceilingFanHighOff;
    delete ceilingFanMedium;
    delete ceilingFanMediumOff;
    return 0;
}