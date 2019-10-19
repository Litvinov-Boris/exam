/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:33:28 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 17:28:41 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options.h"

void printint(int c)
{
    int i;

    i = 32;
    if (c == 0 || c >> 7 & 1)
        write(1, "options: abcdefghijklmnopqrstuvwxyz", 36);
    else
        while (i)
        {
            if (c >> --i & 1)
                write(1, "1", 1);
            else
                write(1, "0", 1);
            if (i % 8 == 0 && i != 0)
                write(1, " ", 1);
        }
    write(1, "\n", 1);
}

void    options(char **arg)
{
    int opt;

    opt = 0;
    while(*(++arg))
        if (**arg == '-')
        {
            while(*(++(*arg)))
                if (**arg < 'a' || **arg > 'z')
                {
                    write(1, "Invalid Option\n", 16);
                    return;
                }
                else
                    opt |= (1 << (**arg - 'a'));
        }
    printint(opt);
}

int main(int argc, char **argv)
{
    if (argc > 1)
        options(argv);
    else
        write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 37);
    return (0);
}