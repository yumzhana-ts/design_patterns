/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 18:01:46 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WeatherData.class.hpp"
#include "CurrentConditionDisplay.class.hpp"

int main() 
{
    WeatherData *weatherdata = new WeatherData;
    CurrentConditionDisplay *currentDisplay = new CurrentConditionDisplay(weatherdata);
    weatherdata->setMeasurement(80, 65, 30);
    (void)currentDisplay;
    return (0);
}