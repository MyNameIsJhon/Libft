/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:54:58 by jriga             #+#    #+#             */
/*   Updated: 2025/03/28 19:01:24 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *st1 = (const unsigned char *)s1;
	const unsigned char *st2 = (const unsigned char *)s2;
	size_t i = 0;

	while (i < n)
	{
		if (st1[i] != st2[i])
			return st1[i] - st2[i];
		i++;
	}
	return 0;
}
