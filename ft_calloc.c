/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:34:20 by nfujisak          #+#    #+#             */
/*   Updated: 2024/04/24 15:45:41 by nfujisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		((char *)s)[i] = '\0';
// 		i++;
// 	}
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>
// int main() {
//     // Test Case 1: Allocating memory for an array of integers
//     size_t count = 5;
//     size_t each_size = sizeof(int);
//     size_t i;
//     int *array = (int *)ft_calloc(count, each_size); // you cast it here

//     if (array == NULL) {
//         printf("Memory allocation failed.\n");
//         return (1); // Test failed
//     }

//     // Check if the allocated memory is properly zeroed out
//     i = 0;
//     while (i < count) 
//     {
//         if (array[i] != 0) 
//         {
//             printf("Not zero - error \n");
//             free(array); // Free allocated memory
//             return (1); // Test failed
//         }
//         i++;
//     }
//
//     // does it work to print everything for i - 0 to n?
//     printf("Calloc successful.\n");
//     free(array); // Free allocated memory
//     return 0; // Test passed
// }