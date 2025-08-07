/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuteQuackQuack.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/07 16:50:35 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MuteQuack_CLASS_H
#define MuteQuack_CLASS_H

#include <iostream>
#include "IQuackable.class.hpp"

class MuteQuack: public IQuackable
{
public:
    MuteQuack(void);
    virtual ~MuteQuack(void);
    virtual void quack(){std::cout << RED << "I am quackless!" << RESET_COLOR << std::endl;}
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