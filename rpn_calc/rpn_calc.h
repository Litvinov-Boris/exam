/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:49:37 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 18:54:52 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CALC_H
#define RPN_CALC_H

#include <stdio.h>

typedef struct  s_list
{
    int         data;
    s_list      *next;
}               t_list;


#endif