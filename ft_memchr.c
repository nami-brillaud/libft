/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:37:14 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/17 17:26:49 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s_ptr;
	size_t				i;

	s_ptr = s;
	i = 0;
	while (i < n)
	{
		if (*s_ptr == c)
		{
			return ((void *)s_ptr);
		}
		else
		{
			s_ptr++;
			i++;
		}
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char test[50] = "Hello Dude 123";
// 	char *ptr;
// 	printf("%s\n", test);
// 	ptr = ft_memchr(test, '5',  strlen(test));
// 	if (ptr != NULL)
// 	{
// 		printf("Found 1 at position %ld\n", ptr - test);
// 	}
// 	else
// 	{
// 		printf("Nothing found!\n");
// 	}
// 	return (0);
// }