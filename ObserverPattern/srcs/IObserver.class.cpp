/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IObserver.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 16:30:05 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IObserver.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

IObserver::IObserver(void) 
{
    if (DEBUG){ std::cout << GREEN << "[IObserver] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

IObserver::~IObserver(void) 
{
    if (DEBUG){std::cout << GREEN << "[IObserver] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/
