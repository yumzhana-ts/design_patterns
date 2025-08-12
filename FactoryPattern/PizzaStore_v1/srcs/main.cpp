/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 16:02:23 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SimplePizzaFactory.class.hpp"
#include "PizzaStore.class.hpp"

int main() 
{
    SimplePizzaFactory factory;
    PizzaStore store(factory);
    store.orderPizza("cheese");
    store.orderPizza("pepperoni");
    return (0);
}