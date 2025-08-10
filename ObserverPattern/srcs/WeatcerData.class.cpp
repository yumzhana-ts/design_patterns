/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeatcerData.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:16 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 18:03:33 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WeatherData.class.hpp"

/****************************************************/
/*                    Constructor                   */
/****************************************************/

WeatherData::WeatherData(void) 
{
    if (DEBUG){ std::cout << GREEN << "[WeatherData] Default Constructor called" << RESET_COLOR << std::endl;}
}

/****************************************************/
/*                    Destructor.                   */
/****************************************************/

WeatherData::~WeatherData(void) 
{
    if (DEBUG){std::cout << GREEN << "[WeatherData] Destructor called" << RESET_COLOR << std::endl;}
}


/****************************************************
*                 Memeber Functions                *
****************************************************/

void WeatherData::registerObserver(IObserver *observer)
{
    std::cout << "Register observer" << std::endl;
    observers.push_back(observer);
}

void WeatherData::removeObserver(IObserver *observer)
{
    std::cout << "Remove observer" << std::endl;
    std::vector<IObserver *>::iterator it = std::find(observers.begin(), observers.end(), observer);
    if(it != this->observers.end())
    {
        this->observers.erase(it);
    }
}

void WeatherData::notifyObserver()
{
    for (size_t i = 0; i < observers.size(); i++)
    {
        observers[i]->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementChanges()
{
    std::cout << "Notify observer" << std::endl;
    this->notifyObserver();
}


void WeatherData::setMeasurement(float t, float h, float p)
{
    temperature = t;
    humidity = h;
    pressure = p;
    measurementChanges();
}
