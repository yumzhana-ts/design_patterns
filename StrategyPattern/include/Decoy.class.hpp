/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decoy.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:11:27 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Decoy_CLASS_H
#define Decoy_CLASS_H

#include <iostream>
#include "ADuck.class.hpp"
#include "IQuackable.class.hpp"
#include "IFlyable.class.hpp"
#include "FlyWithoutWings.class.hpp"
#include "Squeak.class.hpp"

class Decoy: public ADuck
{
private:
public:
    Decoy(void);
    ~Decoy(void);
    virtual void display();
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