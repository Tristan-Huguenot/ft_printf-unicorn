/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 01:42:27 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_mix(void)
{
	char	*str = "Hello World !";

	category("mix");
	TEST(1, "%c %s %p %d %i %u %x %X %%", '>', str, str, INT_MAX, INT_MIN, -1, 42, -42);
	end_category();
}

int	main(void)
{
	test_mix();
	return (0);
}
