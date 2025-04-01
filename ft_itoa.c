/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:13:24 by jriga             #+#    #+#             */
/*   Updated: 2025/04/01 13:17:37 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int num_len(int n)
{
	int i;
	if (n < 0 || n == 0)
		i++;
	while(n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int ft_absol(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

//TODO: negatif et 0 ne fonctionne pas
//WARNING: finir a temp le travail
char *ft_itoa(int n)
{
	char *nb;
	size_t i;

	i = 0;
	if(!(nb = malloc(num_len(n) + 1)))
		return (NULL);
	if(nb < 0)
		nb[i++] = '-';
	else if (nb == 0)
		nb[i++] = '0';
	while(n != 0)
	{
		nb[i++] = ft_absol(n % 10) + '0';
		n /= 10;
	}
	nb[i] = '\0';
	ft_revstr(nb);
	return nb;
}

#include <stdio.h>
int main(void)
{
	char *str = ft_itoa(-123);
	printf("%s", str);
}
