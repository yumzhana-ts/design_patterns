/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WeatherData.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/08 17:54:21 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WeatherDataLASS_H
#define WeatherDataLASS_H

#include <iostream>
#include "ISubject.class.hpp"
#include <vector>

class WeatherData: public ISubject
{
public:
    WeatherData(void);
    ~WeatherData(void);
    void setMeasurement(float t, float h, float p);
    void registerObserver(IObserver *observer);
    void removeObserver(IObserver *observer);
    void notifyObserver();
private:
    float temperature;
    float humidity;
    float pressure;
    std::vector<IObserver *> observers;
    void measurementChanges();
    
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