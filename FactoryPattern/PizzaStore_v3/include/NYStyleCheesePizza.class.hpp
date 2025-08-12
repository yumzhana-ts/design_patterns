/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NYStyleCheesePizza.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 16:44:24 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NYStyleCheesePizzaLASS_H
#define NYStyleCheesePizzaLASS_H

#include <iostream>
#include <vector>
#include "Pizza.class.hpp"
#include "PizzaIngredientFactory.class.hpp"

class NYStyleCheesePizza: public Pizza
{
private:
    IPizzaIngredientFactory *ingredientFactory;
public:
    NYStyleCheesePizza(IPizzaIngredientFactory *factory);
    virtual ~NYStyleCheesePizza(void);
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
