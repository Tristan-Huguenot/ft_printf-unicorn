/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:55:31 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/20 00:56:30 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cast;

	if (!s)
		return (NULL);
	cast = s;
	while (n > 0)
	{
		*cast = c;
		cast++;
		n--;
	}
	return (s);
}
