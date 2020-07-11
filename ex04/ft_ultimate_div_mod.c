/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamatlak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:52:57 by kamatlak          #+#    #+#             */
/*   Updated: 2020/07/10 15:48:41 by kamatlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1)
}
void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
		int mod;

		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
}

