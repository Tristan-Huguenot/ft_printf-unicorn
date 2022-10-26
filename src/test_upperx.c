/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_upperx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 01:14:36 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_upperx(void)
{
	category("X");
	TEST(1, "%X %X %X", 0, 1, -1);
	TEST(2, "%X %X", 10, -10);
	TEST(3, "%X %X", 42, -42);
	TEST(4, "%X %X", 101, -101);
	TEST(5, "%X %X", 90, -90);
	TEST(6, " %X ", INT_MIN);
	TEST(7, " %X ", INT_MAX);
	TEST(8, " %X ", LONG_MAX);
	TEST(9, " %X ", LONG_MIN);
	end_category();
}

int	main(void)
{
	test_upperx();
	return (0);
}
