/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:31:08 by jriga             #+#    #+#             */
/*   Updated: 2025/03/29 19:37:32 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(char *str)
{
	size_t len;
	char *dup;
	size_t i;

	len = ft_strlen(str);
	dup = NULL;
	i = 0;
	if (!(dup = malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return dup;
}
/**/
/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	char *dup; */
/**/
/* 	dup = ft_strdup("hello comment tu vas"); */
/* 	printf("%s", dup); */
/* 	free(dup); */
/* } */
