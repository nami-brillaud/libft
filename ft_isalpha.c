/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:58:57 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/17 19:05:46 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int test;

// 	test = 'Z';
// 	printf("%d\n", ft_isalpha(test));
// 	return (0);
// }