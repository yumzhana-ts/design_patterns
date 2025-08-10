/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISubject.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/07 17:58:35 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISubjectLASS_H
#define ISubjectLASS_H

#include <iostream>
#include "IObserver.class.hpp"

class ISubject
{
public:
    ISubject(void);
    virtual ~ISubject(void);
    virtual void registerObserver(IObserver *observer) = 0; 
    virtual void removeObserver(IObserver *observer) = 0;
    virtual void notifyObserver() = 0;
protected:
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