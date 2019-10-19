/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:14:32 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 16:26:39 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

char *bracketclose(char *str)
{
    int f;
    char c;

    f = 1;
    c = *str;
    while (*(++str) != '\0' && f)
        if(*str == c || *str == c + c % 2 + 1)
            *str == c ? ++f : --f;
    return (str);
}

int brackets(char *arg, char c)
{
    if (*arg == c || *arg == '\0')
        return (1);
    else if (*arg == '}' || *arg == ')' || *arg == ']')
        return (0);
    else if (*arg == '{' || *arg == '(' || *arg == '[')
        return (brackets(arg + 1, *arg + (*arg % 2) + 1)
        * brackets(bracketclose(arg), c));
    else
        return (brackets(++arg, c));
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        while (*(++argv) != NULL)
            if (brackets(*argv, '\0') == 1)
                write(1, "OK\n", 3);
            else
                write(1, "Error\n", 6);            
    }
    else
        write (1, "\n", 1);
    return (0);
}