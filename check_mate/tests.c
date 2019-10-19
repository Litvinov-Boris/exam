/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:03:07 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 14:55:22 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_mate.h"

int p_test(char **arg, int i, int j)
{
    if (i > 1 && j != ft_strlen(arg[1]) && j != 1)
    {
        if (arg[i - 1][j - 1] == 'K' || arg[i - 1][j + 1] == 'K')
            return (1);
    }
    return (0);
}

int r_test(char **arg, int y, int x)
{
    int j;
    int len;

    len = ft_strlen(arg[y]);
    j = x;
    while (++j < len && prep(arg[y][j]) != 1)
        if (arg[y][j] == 'K')
            return (1);
    j = x;
    while (--j >= 0 && prep(arg[y][j]) != 1)
        if (arg[y][j] == 'K')
            return (1);
    j = y;
    while (++j < len && prep(arg[j][x]) != 1)
        if (arg[j][x] == 'K')
            return (1);
    j = y;
    while (--j >= 0 && prep(arg[j][x]) != 1)
        if (arg[j][x] == 'K')
            return (1);
    return (0);
}

int b_test(char **arg, int y, int x, int ac)
{
    int i;
    int j;

    i = y;
    j = x;
    while (++j < ac - 1 && ++i < ac && prep(arg[i][j]) != 1)
        if (arg[i][j] == 'K')
            return (1);
    i = y;
    j = x;
    while (++j < ac - 1 && --i >= 1 && prep(arg[i][j]) != 1)
        if (arg[i][j] == 'K')
            return (1);
    i = y;
    j = x;
    while (--j > 0 && --i >= 1 && prep(arg[i][j]) != 1)
        if (arg[i][j] == 'K')
            return (1);
    i = y;
    j = x;
    while (--j > 0 && ++i < ac && prep(arg[i][j]) != 1)
        if (arg[i][j] == 'K')
            return (1);
    return (0);
}

int q_test(char **arg, int y, int x, int ac)
{
    if (b_test(arg, y, x, ac) == 1 || r_test(arg, y, x) == 1)
        return (1);
    return (0);
}