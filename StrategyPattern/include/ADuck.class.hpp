/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ADuck.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/04 18:11:27 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADuck_CLASS_H
#define ADuck_CLASS_H
#include "IFlyable.class.hpp"
#include "IQuackable.class.hpp"

#include <iostream>

class ADuck
{
protected:
    IFlyable *flyBehavior;
    IQuackable *quackBehavior;
public:
    void performFly() { if (flyBehavior) flyBehavior->fly(); }
    void performQuack() { if (quackBehavior) quackBehavior->quack(); }
    ADuck(void);
    virtual ~ADuck(void);
    virtual void display() = 0;
    void setFly(IFlyable *f){ flyBehavior = f;}
    void setQuack(IQuackable *q){ quackBehavior = q;}
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