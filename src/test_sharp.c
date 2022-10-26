/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sharp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 15:49:00 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_x(void)
{
	sub_category("x");
	TEST(1, "%#x", 42);
	TEST(2, "%#x", 42);
	TEST(3, "%#x", 0);
	TEST(4, "%#x", -42);
	TEST(5, "%#x", -1);
	end_category();
}

static void	test_upperx(void)
{

	sub_category("X");
	TEST(1, "%#X", 42);
	TEST(2, "%#X", 42);
	TEST(3, "%#X", 0);
	TEST(4, "%#X", -42);
	TEST(5, "%#X", -1);
	end_category();
}

int	main(void)
{
	category("sharp");
	test_x();
	test_upperx();
	return (0);
}
