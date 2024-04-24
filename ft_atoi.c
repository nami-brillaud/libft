/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:00:14 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/24 15:30:39 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	whitespace(char c)
{
	if (c == ' ' || c == '\0' || c == '\t'
		|| c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	overflow(long nb, int sign, char next_digit)
{
	if (sign == 1)
	{
		if (nb > LONG_MAX / 10
			|| ((nb == LONG_MAX / 10) && (next_digit - '0' > LONG_MAX % 10)))
			return ((int)(LONG_MAX));
		if (nb < LONG_MIN / 10
			|| ((nb == LONG_MIN / 10) && (next_digit - '0' < LONG_MIN % 10)))
			return ((int)(LONG_MIN));
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -sign;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (overflow(result, sign, *str) != 0)
				return (overflow(result, sign, *str));
			result = result * 10 + *str - '0';
			str++;
		}
		else
			break ;
	}
	return ((int)(sign * result));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *mixed = "4294967295";;
// 	printf("%d\n", ft_atoi(mixed));
// 	return (0);
// }
