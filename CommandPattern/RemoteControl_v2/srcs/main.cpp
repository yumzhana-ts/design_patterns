/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 17:34:21 by ytsyrend         ###   ########.fr       */
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


int main() 
{
    RemoteControl *remote = new RemoteControl();
    Light* livingRoomLight = new Light("Living Room");
    Light* kitchenLight = new Light("Kitchen");
    //GarageDoor* door = new GarageDoor("Garage");
    Stereo* stereo = new Stereo("Living Room");
    
    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand* kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);
    
    //GarageDoorOpenCommand * garageOpen = 
    //    new GarageDoorOpenCommand(door);

    StereoOnWithCDCommand* stereoOnWithCD = new StereoOnWithCDCommand(stereo);
    StereoOffWithCDCommand* stereoOffWithCD = new StereoOffWithCDCommand(stereo);

    remote->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remote->setCommand(1, kitchenLightOn, kitchenLightOff);
    remote->setCommand(2, stereoOnWithCD, stereoOffWithCD);
    
    
    std::cout << remote;
    remote->onButtonWasPushed(0);
    remote->offButtonWasPushed(0);
    remote->undoButtonWasPushed();
    remote->onButtonWasPushed(1);
    remote->offButtonWasPushed(1);
    remote->onButtonWasPushed(2);
    remote->offButtonWasPushed(2);
    return (0);
}