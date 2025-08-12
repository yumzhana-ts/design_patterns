/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PizzaIngredientFactory.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/12 18:30:13 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IPizzaIngredientFactoryLASS_H
#define IPizzaIngredientFactoryLASS_H

#include <iostream>
#include "Ingredients.class.hpp"

struct IPizzaIngredientFactory {
    virtual ~IPizzaIngredientFactory() {}
    virtual IDough* createDough() = 0;
    virtual ISauce* createSauce() = 0;
    virtual ICheese* createCheese() = 0;
    virtual std::vector<IVeggies*> createVeggies() = 0;
    virtual IPepperoni* createPepperoni() = 0;
    virtual IClams* createClam() = 0;
};

struct NYPizzaIngredientFactory : public IPizzaIngredientFactory {
    IDough* createDough() { return new ThinCrustDough(); }
    ISauce* createSauce() { return new MarinaraSauce(); }
    ICheese* createCheese() { return new ReggianoCheese(); }

    std::vector<IVeggies*> createVeggies() 
    {
        std::vector<IVeggies*> veggies;
        veggies.push_back(new Garlic());
        veggies.push_back(new Onion());
        veggies.push_back(new Mushroom());
        return veggies;
    }

    IPepperoni* createPepperoni() { return new SlicedPepperoni(); }
    IClams* createClam() { return new FreshClams(); }
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