/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightOnCommand.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/14 16:35:15 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LightOnCommandLASS_H
#define LightOnCommandLASS_H

#include <iostream>
#include "ICommand.class.hpp"
#include "Light.class.hpp"

class LightOnCommand: public ICommand
{
private:
    Light* light;
public:
    LightOnCommand(Light* l);
    ~LightOnCommand(void);
    
    void execute();
};


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