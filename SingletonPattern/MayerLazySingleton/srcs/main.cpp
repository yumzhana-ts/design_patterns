/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/13 17:53:15 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChocolateBoiler.class.hpp"

int main() 
{
    ChocolateBoiler& boiler1 = ChocolateBoiler::getInstance();
    boiler1.fill();
    boiler1.boil();

    ChocolateBoiler& boiler2 = ChocolateBoiler::getInstance();
    std::cout << "Is boiler2 boiled? " << boiler2.isBoiled() << std::endl;

    return 0;
}