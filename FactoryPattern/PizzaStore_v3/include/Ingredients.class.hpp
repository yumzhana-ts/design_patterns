/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IIngredients.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/12 18:10:52 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDoughLASS_H
#define IDoughLASS_H

#include <iostream>

struct IDough {
    virtual ~IDough() {}
    virtual std::string getName() const = 0;
};

struct ISauce {
    virtual ~ISauce() {}
    virtual std::string getName() const = 0;
};

struct ICheese {
    virtual ~ICheese() {}
    virtual std::string getName() const = 0;
};

struct IVeggies {
    virtual ~IVeggies() {}
    virtual std::string getName() const = 0;
};

struct IPepperoni {
    virtual ~IPepperoni() {}
    virtual std::string getName() const = 0;
};

struct IClams {
    virtual ~IClams() {}
    virtual std::string getName() const = 0;
};

struct ThinCrustDough : public IDough {
    std::string getName() const { return "Thin Crust Dough"; }
};

struct MarinaraSauce : public ISauce {
    std::string getName() const { return "Marinara Sauce"; }
};

struct ReggianoCheese : public ICheese {
    std::string getName() const { return "Reggiano Cheese"; }
};

struct Garlic : public IVeggies {
    std::string getName() const { return "Garlic"; }
};

struct Onion : public IVeggies {
    std::string getName() const { return "Onion"; }
};

struct Mushroom : public IVeggies {
    std::string getName() const { return "Mushroom"; }
};

struct SlicedPepperoni : public IPepperoni {
    std::string getName() const { return "Sliced Pepperoni"; }
};

struct FreshClams : public IClams {
    std::string getName() const { return "Fresh Clams"; }
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