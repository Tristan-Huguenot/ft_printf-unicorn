/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:42:13 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 18:55:41 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	category(char *s)
{
	printf("------------------\n");
	printf("category: %s\n", s);
}

void	end_category(void)
{
	printf("------------------\n");
}
