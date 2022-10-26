/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:50:45 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/20 00:51:01 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	char	*c_dest;

	if (!dest || !src)
		return (NULL);
	c_dest = dest + (n - 1);
	src += (n - 1);
	while (n > 0)
	{
		*c_dest = *(char *)src;
		c_dest--;
		src--;
		n--;
	}
	return (dest);
}
