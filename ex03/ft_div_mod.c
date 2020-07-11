/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamatlak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:56:32 by kamatlak          #+#    #+#             */
/*   Updated: 2020/07/10 15:20:03 by kamatlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_div_mod(int a, int b, int *div, int *mod)
{
	if
		*div = a / b;
	else
	   	*mod = a % b;
}	
