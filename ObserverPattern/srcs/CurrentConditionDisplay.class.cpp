/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CurrentConditionDisplay.class.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 18:02:47 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CurrentConditionDisplay.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

CurrentConditionDisplay::CurrentConditionDisplay(ISubject *weatherData) 
{
    if (DEBUG){ std::cout << GREEN << "[CurrentConditionDisplay] Default Constructor called" << RESET_COLOR << std::endl;}
    this->WeatherData = weatherData;
    this->WeatherData->registerObserver(this);
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

CurrentConditionDisplay::~CurrentConditionDisplay(void) 
{
    if (DEBUG){std::cout << GREEN << "[CurrentConditionDisplay] Destructor called" << RESET_COLOR << std::endl;}
}

/****************************************************
*                 Memeber Functions                *
****************************************************/

void CurrentConditionDisplay::update(float temp, float humidity, float pressure)
{
    this->temperature = temp;
    this->humidity = humidity;
    (void)pressure;
    display();
}

void CurrentConditionDisplay::display()
{
    std::cout << "Current condition: " << temperature << ", " <<
    "F degrees and " << humidity << " persent humidity" << std::endl;
}