/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/27 15:47:17 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_s(void)
{
	char	*str = "Hello World !";

	sub_category("p");
	TEST(1, "%.3s", str);
	TEST(2, "%.14s", str);
	TEST(3, "%.5s", NULL);
	TEST(4, "%.12s", 0);
	end_category();
}

static void	test_p(void)
{
	char	*str = "Hello World !";

	sub_category("p");
	TEST(1, "%.14p", str);
	TEST(2, "%.12p", str);
	TEST(3, "%.p", NULL);
	TEST(4, "%.6p", NULL);
	TEST(5, "%.5p", 0);
	end_category();
}

static void	test_d(void)
{
	sub_category("d");
	TEST(1, "%.4d", 42);
	TEST(2, "%.54d", -42);
	TEST(3, "%.3d", 0);
	TEST(4, "%.15d", INT_MAX);
	TEST(5, "%.2d", INT_MIN);
	TEST(6, "%.10d %.5d %.9d", 101, 99, 100);
	TEST(7, "%.d", 0);
	end_category();
}

static void	test_i(void)
{
	sub_category("i");
	TEST(1, "%.4i", 42);
	TEST(2, "%.54i", -42);
	TEST(3, "%.3i", 0);
	TEST(4, "%.15i", INT_MAX);
	TEST(5, "%.2i", INT_MIN);
	TEST(6, "%.10i %.5i %.9i", 101, 99, 100);
	TEST(7, "%.i", 0);
	end_category();
}

static void	test_u(void)
{
	sub_category("u");
	TEST(1, "%.4u", 42);
	TEST(2, "%.54u", -42);
	TEST(3, "%.3u", 0);
	TEST(4, "%.15u", INT_MAX);
	TEST(5, "%.2u", INT_MIN);
	TEST(6, "%.10u %.5u %.9u", 101, 99, 100);
	TEST(7, "%.u", 0);
	end_category();
}

static void	test_x(void)
{
	sub_category("x");
	TEST(1, "%.4x", 42);
	TEST(2, "%.2x", 42);
	TEST(3, "%.3x", 0);
	TEST(4, "%.10x", -42);
	TEST(5, "%.42x", -1);
	TEST(6, "%.x", 0);
	end_category();
}

static void	test_upperx(void)
{
	sub_category("X");
	TEST(1, "%.4X", 42);
	TEST(2, "%.2X", 42);
	TEST(3, "%.3X", 0);
	TEST(4, "%.10X", -42);
	TEST(5, "%.42X", -1);
	TEST(6, "%.X", 0);
	end_category();
}

int	main(void)
{
	category("dot");
	test_s();
	test_p();
	test_d();
	test_i();
	test_u();
	test_x();
	test_upperx();
	return (0);
}
