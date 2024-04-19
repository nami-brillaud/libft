/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:02:24 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/19 17:44:34 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*s1_ptr;
	unsigned char		*s2_ptr;
	size_t				i;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*s1_ptr != *s2_ptr)
		{
			return ((int)(*s1_ptr) - (int)(*s2_ptr));
		}
		else
		{
			i++;
			s1_ptr++;
			s2_ptr++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	// char haystack1[] = "Hey";
// 	// char haystack2[] = "Heo";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 3));
// // 10 (difference between y and o)

// 	// char haystack1[] = "Hey";
// 	// char haystack2[] = "Heyo";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 3)); // returns 0 

// 	// char haystack1[] = "Hey";
// 	// char haystack2[] = "Heyo";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 4)); 
// // returns -111 (difference between \0 (0) and o (111))

// 	// char haystack1[] = "Hey";
// 	// char haystack2[] = "Heyo";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 5)); 
// // with 1 byte over, still returns -111 
// (difference between \0 (0) and o (111))

// 	// char *haystack1 = NULL;
// 	// char *haystack2 = NULL;
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 5)); //segfault
// 	// return (0);

// 	// char haystack1[] = "";
// 	// char haystack2[] = "";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 0));
//for byte 1 and 0, returns 0

// 	// char haystack1[] = "";
// 	// char haystack2[] = "";
// 	// printf("%d\n", ft_memcmp(haystack1, haystack2, 5)); 
// 	// returns 208 - undefined behavior

// 	// int arr1[] = {1, 2, 3, 4};
//     // int arr2[] = {1, 2, 3, 5};
//     // printf("%d\n", ft_memcmp(arr1, arr2, sizeof(arr1))); // returns -1

// 	//return(0);

// }