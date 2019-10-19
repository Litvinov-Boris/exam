/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:14:27 by boris             #+#    #+#             */
/*   Updated: 2019/07/19 16:06:34 by boris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
#define BRACKETS_H

#include <unistd.h>

char *bracketclose(char *str);
int brackets(char *arg, char c);

#endif