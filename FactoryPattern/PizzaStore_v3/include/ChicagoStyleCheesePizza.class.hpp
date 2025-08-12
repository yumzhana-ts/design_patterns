/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChicagoStyleCheesePizza.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:30:52 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ChicagoStyleCheesePizzaLASS_H
#define ChicagoStyleCheesePizzaLASS_H

#include <iostream>
#include "Pizza.class.hpp"
#include "PizzaIngredientFactory.class.hpp"

class ChicagoStyleCheesePizza: public Pizza
{
private:
    IPizzaIngredientFactory *ingredientFactory;
public:
    ChicagoStyleCheesePizza(IPizzaIngredientFactory *factory);
    virtual ~ChicagoStyleCheesePizza(void);
    virtual void cut(){ std::cout << "Cutting the pizza into square slices" << std::endl;}
    void prepare();
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
