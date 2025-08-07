/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:41:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/07 17:23:59 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ADuck.class.hpp"
#include "MallardDuck.class.hpp"
#include "RedheadDuck.class.hpp"
#include "Decoy.class.hpp"
#include "RubberDuck.class.hpp"
#include "FlyWithWings.class.hpp"
#include "FlyWithoutWings.class.hpp"
#include "MuteQuack.class.hpp"

void runDuckShow(ADuck* duck) 
{
    duck->display();
    duck->performFly();
    duck->performQuack();
    duck->setFly(new FlyWithoutWings);
    duck->setQuack(new MuteQuack);
    duck->performFly();
    duck->performQuack();
    delete duck;
}

int main() 
{
    runDuckShow(new RedheadDuck);
    runDuckShow(new Decoy);
    runDuckShow(new MallardDuck);
    runDuckShow(new RubberDuck);
    return (0);
}