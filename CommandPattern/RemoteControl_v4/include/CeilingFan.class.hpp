/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CeilingFan.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 17:17:45 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CeilingFanLASS_H
#define CeilingFanLASS_H

#include <iostream>

class CeilingFan 
{
private:
    std::string location;
    int speed;
    std::string name;
public:
    CeilingFan(std::string location);
    ~CeilingFan(void);
    void high();
    void medium();
    void low();
    void off();
    int getSpeed() const;
    std::string getName(){return (this->name);}

    static const int HIGH = 3;
    static const int MEDIUM = 2;
    static const int LOW = 1;
    static const int OFF = 0;
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