/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:29:39 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/19 17:53:10 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen(const char *s)
{	
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	maxcopy;
	size_t	i;

	if (dst == NULL)
		return (strlen(src));
	dstlen = strlen(dst);
	srclen = strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	maxcopy = dstsize - (dstlen + 1);
	i = 0;
	while (i < maxcopy && *src)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
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