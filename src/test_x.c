/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 01:14:19 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_x(void)
{
	category("x");
	TEST(1, "%x %x %x", 0, 1, -1);
	TEST(2, "%x %x", 10, -10);
	TEST(3, "%x %x", 42, -42);
	TEST(4, "%x %x", 101, -101);
	TEST(5, "%x %x", 90, -90);
	TEST(6, " %x ", INT_MIN);
	TEST(7, " %x ", INT_MAX);
	TEST(8, " %x ", LONG_MAX);
	TEST(9, " %x ", LONG_MIN);
	end_category();
}

int	main(void)
{
	test_x();
	return (0);
}
