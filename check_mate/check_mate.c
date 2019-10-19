/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:03:04 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 14:28:07 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_mate.h"

int ft_check_mate(char **arg, int ac)
{
    int i;
    int j;

    i = 1;
    while (arg[i])
    {
        j = 0;
        while (arg[i][j] != '\0')
        {
            if (arg[i][j] == 'R' && r_test(arg, i, j) == 1)
                return (1);
            if (arg[i][j] == 'Q' && q_test(arg, i, j, ac) == 1)
                return (1);
            if (arg[i][j] == 'P' && p_test(arg, i, j) == 1)
                return (1);
            if (arg[i][j] == 'B' && b_test(arg, i, j, ac) == 1)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;

    if (argc > 1 && argc == ft_strlen(argv[1]) + 1)
    {
        i = 1;
        while (argv[i] != NULL)
        {
            if (ft_strlen(argv[i]) + 1 == argc)
                i++;
            else
            {
                write (1, "Fail\n", 5);
                return (0);
            }
        }
        if (ft_check_mate(argv, argc) == 1)
            write(1, "Success\n", 8);
        else
            write(1, "Fail\n", 5);        
    }
    else if (argc > 1)
        write (1, "Fail\n", 5);
    else
        write (1, "\n", 1);
    return (0);
}