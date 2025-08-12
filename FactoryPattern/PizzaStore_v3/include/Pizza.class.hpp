/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pizza.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 16:44:24 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PizzaLASS_H
#define PizzaLASS_H

#include <iostream>
#include <vector>
#include "Ingredients.class.hpp"

class Pizza
{
protected:
    std::string name;
    IDough* dough;
    ISauce* sauce;
    std::vector<IVeggies* > veggies;
    ICheese* cheese;
    IPepperoni* pepperoni;
    IClams* clam;

public:
    Pizza(void);
    virtual ~Pizza(void);
    virtual void prepare() = 0;
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual std::string getName(){return (name);};
    virtual void setName(std::string n){this->name = n;}
    //std::string toString();
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