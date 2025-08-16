/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Light.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/15 17:04:37 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Light.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

Light::Light(std::string n) 
{
    this->name = n;
    if (DEBUG){ std::cout << GREEN << "[Light] Default Constructor called" << RESET_COLOR << std::endl;}
}


/****************************************************/
/*                    Destructor.                   */
/****************************************************/

Light::~Light(void) 
{
    if (DEBUG){std::cout << GREEN << "[Light] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void Light::on()
{
    std::cout << this->getName() << " light is on" << std::endl;
}

void Light::off()
{
    std::cout << this->getName() << " light is off" << std::endl;
}