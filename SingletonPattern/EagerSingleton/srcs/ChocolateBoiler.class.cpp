/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChocolateBoiler.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/13 18:46:40 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChocolateBoiler.class.hpp"
ChocolateBoiler* ChocolateBoiler::instance = new ChocolateBoiler();

/****************************************************/
/*                    Constructor                   */
/****************************************************/

ChocolateBoiler::ChocolateBoiler(void) 
{
    empty = true;
    boiled = false;
    if (DEBUG){ std::cout << GREEN << "[ChocolateBoiler] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

ChocolateBoiler::~ChocolateBoiler(void) 
{
    if (DEBUG){std::cout << GREEN << "[ChocolateBoiler] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

ChocolateBoiler* ChocolateBoiler::getInstance()
{
    return instance;
}

void ChocolateBoiler::fill()
{
    if(this->isEmpty())
    {
        empty = false;
        boiled = false;
    }
}

void ChocolateBoiler::drain()
{
    if( !this->isEmpty() && this->isEmpty())
    {
        empty = true;
    }
}

void ChocolateBoiler::boil()
{
    if( !this->isEmpty() && !this->isEmpty())
    {
        boiled = true;
    }
}

bool ChocolateBoiler::isEmpty()
{
    return (this->empty);
}

bool ChocolateBoiler::isBoiled()
{
    return (this->boiled);
}