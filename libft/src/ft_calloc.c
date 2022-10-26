/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:27:32 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/18 15:10:13 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*memptr;

	if (size == 0 || nmemb == 0)
	{
		memptr = malloc(0);
		return (memptr);
	}
	bytes = nmemb * size;
	if (bytes / size != nmemb)
		return (NULL);
	memptr = malloc(bytes);
	if (memptr == NULL)
		return (NULL);
	ft_bzero(memptr, bytes);
	return (memptr);
}
