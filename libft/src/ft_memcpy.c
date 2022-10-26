/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:52:24 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/20 00:43:41 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c_dest;

	if (n == 0 || (dest == NULL || src == NULL))
		return (NULL);
	c_dest = dest;
	while (n > 0)
	{
		*c_dest = *(char *)src;
		c_dest++;
		src++;
		n--;
	}
	return (dest);
}
