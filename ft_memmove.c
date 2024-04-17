/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:09:31 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/17 17:10:49 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_ptr;
	char	*s_ptr;
	size_t	i;

	d_ptr = (char *)dst;
	s_ptr = (char *)src;
	if (src < dst)
	{
		i = len;
		while (i--)
		{
			d_ptr[i] = s_ptr[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d_ptr[i] = s_ptr[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// int main()
// {
// 	//String Overlap Test
// 	char str[] = "Start Stop";
// 	printf("Source is %s, Dest is 3 first chars of %s\n ", str, str + 2);
// 	ft_memmove(str + 2, str, 3 * sizeof(char));  
// 	printf("Source becomes %s, Dest becomes %s\n", str, str + 2);
//
// 	//String Normal Test
// 	char str[] = "Start Stop";
// 	printf("Source is 3 first chars of %s, Dest is %s\n ", str + 2, str);
// 	ft_memmove(str, str + 2, 3 * sizeof(char));  
// 	printf("Source becomes %s, Dest becomes %s\n", str + 2, str);
//
// 	//Int Normal Test
// 	int source[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_memmove(source + 2, source, sizeof(int) * 2);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", source[i]);
// 	}
// 	return (0);
// }