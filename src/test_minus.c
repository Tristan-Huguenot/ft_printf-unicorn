/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_minus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 13:57:49 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_c(void)
{
	sub_category("c");
	TEST(1, "%-2c", 'q');
	TEST(2, "%-1c", 'q');
	TEST(3, "%-42c", 'q');
	TEST(4, "%-10c", 'q');
	end_category();
}

static void	test_s(void)
{
	char	*str = "Hello World !";

	sub_category("s");
	TEST(1, "%-13s", str);
	TEST(2, "%-10s", "");
	TEST(3, "%-20s", str);
	TEST(4, "%-2s", "");
	TEST(4, "%-9s", NULL);
	end_category();
}

static void	test_p(void)
{
	char	*str = "Hello World !";

	sub_category("p");
	TEST(1, "%-15p", str);
	TEST(2, "%-20p", str);
	TEST(3, "%-7p", NULL);
	TEST(4, "%-10p", 0);
	end_category();
}

static void	test_d(void)
{
	sub_category("d");
	TEST(1, "%-3d", 42);
	TEST(2, "%-3d", -42);
	TEST(3, "%-1d", 0);
	TEST(4, "%-42d", INT_MAX);
	TEST(5, "%-42d", INT_MIN);
	TEST(6, "%-4d %-4d %-4d", 101, 99, 100);
	end_category();
}

static void	test_i(void)
{
	sub_category("i");
	TEST(1, "%-3i", 42);
	TEST(2, "%-3i", -42);
	TEST(3, "%-1i", 0);
	TEST(4, "%-42i", INT_MAX);
	TEST(5, "%-42i", INT_MIN);
	TEST(6, "%-4i %-4i %-4i", 101, 99, 100);
	end_category();
}

static void	test_u(void)
{
	sub_category("u");
	TEST(1, "%-3u", 42);
	TEST(2, "%-3u", -42);
	TEST(3, "%-4u", 0);
	TEST(4, "%-10u", INT_MAX);
	TEST(5, "%-10u", INT_MIN);
	TEST(6, "%-3u %-4u %-5u", 101, 99, 100);
	end_category();
}

static void	test_x(void)
{
	sub_category("x");
	TEST(1, "%-3x", 42);
	TEST(2, "%-2x", 42);
	TEST(3, "%-2x", 0);
	TEST(4, "%-10x", -42);
	TEST(5, "%-42x", -1);
	end_category();
}

static void	test_upperx(void)
{

	sub_category("X");
	TEST(1, "%-3X", 42);
	TEST(2, "%-2X", 42);
	TEST(3, "%-2X", 0);
	TEST(4, "%-10X", -42);
	TEST(5, "%-42X", -1);
	end_category();
}

int	main(void)
{
	category("minus");
	test_c();
	test_s();
	test_p();
	test_d();
	test_i();
	test_u();
	test_x();
	test_upperx();
	return (0);
}
