/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:03:12 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 14:51:17 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MATE_H
#define CHECK_MATE_H

#include <unistd.h>
#include <stdlib.h>

int ft_check_mate(char **arg, int ac);
int ft_strlen(char *str);
int p_test(char **arg, int i, int j);
int prep(char c);
int r_test(char **arg, int y, int x);
int b_test(char **arg, int y, int x, int ac);
int q_test(char **arg, int y, int x, int ac);

#endif