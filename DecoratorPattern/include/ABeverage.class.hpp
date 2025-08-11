/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABeverage.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/10 16:08:35 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABeverageLASS_H
#define ABeverageLASS_H

#include <iostream>

class ABeverage
{
protected:
    std::string description;
public:
    ABeverage(void);
    virtual ~ABeverage(void);
    virtual double cost() = 0;
    virtual std::string getDescription(){ return (this->description);}
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

