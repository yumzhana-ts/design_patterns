/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 17:30:52 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICommand.class.hpp"
#include "Light.class.hpp"
#include "LightOnCommand.class.hpp"
#include "SimpleRemoteControl.class.hpp"
#include "GarageDoor.class.hpp"
#include "GarageDoorOpenCommand.class.hpp"

int main() 
{
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    Light* light;
    light = new Light;
    GarageDoor* door;
    door = new GarageDoor;
    LightOnCommand* command;
    command = new LightOnCommand(light);
    GarageDoorOpenCommand * garageOpen = 
        new GarageDoorOpenCommand(door);

    
    remote->setCommend(command);
    remote->buttonWasPressed();

    remote->setCommend(garageOpen);
    remote->buttonWasPressed();

    delete remote;
    delete light;
    delete command;
    return (0);
}