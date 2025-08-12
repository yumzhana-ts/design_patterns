/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/12 15:47:18 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "APizzaStore.class.hpp"
#include "NYStylePizzaStore.class.hpp"
#include "ChicagoStore.class.hpp"
#include "Pizza.class.hpp"

int main() 
{
    APizzaStore *ny;
    ny = new NYStylePizzaStore();
    APizzaStore *cg;
    cg = new ChicagoStore();

    Pizza *pizza = ny->orderPizza("ny_cheese");
    std::cout << RED << " Ethan ordered a " << pizza->getName() << RESET_COLOR << std::endl;

    pizza = cg->orderPizza("cg_cheese");
    std::cout << RED << " Joel ordered a " << pizza->getName() << RESET_COLOR << std::endl;

    return (0);
}