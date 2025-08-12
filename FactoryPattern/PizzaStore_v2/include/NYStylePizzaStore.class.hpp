/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NYStylePizzaStore.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <ytsyrend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:24:01 by ytsyrend          #+#    #+#             */
/*   Updated: 2025/08/11 15:57:28 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NYStylePizzaStoreLASS_H
#define NYStylePizzaStoreLASS_H

#include <iostream>
#include "APizzaStore.class.hpp"
#include "CheesePizza.class.hpp"
#include "PepperoniPizza.class.hpp"
#include "Pizza.class.hpp"
#include "NYStyleCheesePizza.class.hpp"
#include "ChicagoStyleCheesePizza.class.hpp"

class NYStylePizzaStore: public APizzaStore
{
public:
    NYStylePizzaStore();
    virtual ~NYStylePizzaStore(void);
    virtual Pizza* createPizza(const std::string& type);
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