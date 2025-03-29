/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jriga <jriga@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 10:19:20 by jriga             #+#    #+#             */
/*   Updated: 2025/03/29 10:21:26 by jriga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: atoi de la piscine et non correct pour copier la vrai fonction

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n' || \
			*str == '\r' || *str == '\f'))
		str++;
	while (*str == '-' && *str == '+')
	{
		if(*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
