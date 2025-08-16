/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RemoteControl.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 22:33:59 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RemoteControlLASS_H
#define RemoteControlLASS_H

#include <iostream>
#include "ICommand.class.hpp"
#include "NoCommand.class.hpp"

class RemoteControl
{
public:
    std::array<ICommand*,7> onCommand;
    std::array<ICommand*,7> offCommand;
    ICommand* undoCommand;
    RemoteControl(void);
    ~RemoteControl(void);
    
    void setCommand(int slot, ICommand* on, ICommand* off);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void undoButtonWasPushed();
};

std::ostream& operator<<(std::ostream& os, RemoteControl* remote);


#define DEBUG 1
// Define ANSI escape sequences for colors
#define RESET_COLOR "\033[0m"
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define WHITE "\033[0;37m"
#define BOLD_BLACK "\033[1;30m"
#define BG_WHITE "\033[0;47m"
#endif