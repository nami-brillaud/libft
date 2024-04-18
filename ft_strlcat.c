/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:29:39 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/18 18:08:14 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	totalsize;
	size_t	i;
	size_t	j;

	totalsize = ft_strlen(src) + ft_strlen(dst);
	if (!dstsize)
		return (totalsize);
	i = ft_strlen(dst);
	j = 0;
	while (j < (dstsize - 1) && *src)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (totalsize);
}

// #include <stdio.h>
// int main(void)
// {
// 	char src[2] = "";
// 	char dst[50] = "";
// 	printf("The source is %s, the dest is %s\n", src, dst);
// 	size_t result = ft_strlcat(dst, src, 0);
// 	printf("Now the source is %s, the dest is %s, the result is %zu\n", 
// src, dst, result);
// 	return (0);
// }