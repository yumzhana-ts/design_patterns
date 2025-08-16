/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stereo.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 15:28:20 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stereo.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

Stereo::Stereo(std::string n) 
{
    this->name = n;
    this->volume = 0;
    if (DEBUG){ std::cout << GREEN << "[Stereo] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

Stereo::~Stereo(void) 
{
    if (DEBUG){std::cout << GREEN << "[Stereo] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void Stereo::on()
{
    std::cout << this->getName() << " stereo is on" << std::endl;
}

void Stereo::off()
{
    std::cout << this->getName() << " stereo is off" << std::endl;
}

void Stereo::setCd()
{
    std::cout << this->getName() << " stereo is set for CD input" << std::endl;
}

void Stereo::setDvd()
{
    std::cout << this->getName() << " stereo is set for DVD input" << std::endl;
}

void Stereo::setRadio()
{
    std::cout << this->getName() << " stereo is set for Radio" << std::endl;
}

void Stereo::setVolume(int v)
{
    volume = v;
    std::cout << this->getName() << "stereo volume set to " << std::to_string(volume) << std::endl;
}