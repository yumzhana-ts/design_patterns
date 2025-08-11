/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 00:46:12 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABeverage.class.hpp"
#include "Espresso.class.hpp"
#include "Mocha.class.hpp"
#include "DarkRoast.class.hpp"
#include "HouseBlend.class.hpp"
#include "Whip.class.hpp"
#include "Soy.class.hpp"

int main() 
{
    ABeverage *beverage;
    beverage = new Espresso();
    beverage = new Whip(beverage);
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    ABeverage *beverage2;
    beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    ABeverage *beverage3;
    beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;
    return (0);
    
}
