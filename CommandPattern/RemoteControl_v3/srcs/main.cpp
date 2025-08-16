/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 22:40:56 by ytsyrend         ###   ########.fr       */
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


int main() 
{
    RemoteControl* remoteControl = new RemoteControl();
    CeilingFan* ceilingFan = new CeilingFan("Living Room");

    CeilingFanMediumCommand* ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
    CeilingFanHighCommand* ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
    CeilingFanOffCommand* ceilingFanHighOff = new CeilingFanOffCommand(ceilingFan);
    CeilingFanOffCommand* ceilingFanMediumOff = new CeilingFanOffCommand(ceilingFan);

    remoteControl->setCommand(0, ceilingFanMedium, ceilingFanHighOff);
    remoteControl->setCommand(1, ceilingFanHigh, ceilingFanMediumOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->undoButtonWasPushed();

    remoteControl->onButtonWasPushed(1);
    std::cout << remoteControl;
    remoteControl->undoButtonWasPushed();

    delete ceilingFan;
    delete remoteControl;
    return 0;
}