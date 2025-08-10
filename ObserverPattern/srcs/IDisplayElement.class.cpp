/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IIDisplayElement.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 15:43:06 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IDisplayElement.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

IDisplayElement::IDisplayElement(void) 
{
    if (DEBUG){ std::cout << GREEN << "[IDisplayElement] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

IDisplayElement::~IDisplayElement(void) 
{
    if (DEBUG){std::cout << GREEN << "[IDisplayElement] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void IDisplayElement::display()
{
    std::cout << "here is display info" << std::endl;
}