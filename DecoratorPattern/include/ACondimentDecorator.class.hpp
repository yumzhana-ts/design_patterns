/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACondimentDecorator.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 15:41:17 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACondimentDecoratorLASS_H
#define ACondimentDecoratorLASS_H

#include <iostream>
#include "ABeverage.class.hpp"

class ACondimentDecorator: public ABeverage
{
private:
public:
    ACondimentDecorator(void);
    virtual ~ACondimentDecorator(void);
    virtual std::string getDescription() = 0;
};


#define DEBUG 0
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
