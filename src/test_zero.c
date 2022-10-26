/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 17:09:20 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_p(void)
{
	char	*str = "Hello World !";

	sub_category("p");
	TEST(1, "%015p", str);
	TEST(2, "%020p", str);
	TEST(3, "%07p", NULL);
	TEST(4, "%010p", 0);
	end_category();
}

static void	test_d(void)
{
	sub_category("d");
	TEST(1, "%03d", 42);
	TEST(2, "%04d", -42);
	TEST(3, "%01d", 0);
	TEST(4, "%042d", INT_MAX);
	TEST(5, "%042d", INT_MIN);
	TEST(6, "%04d %04d %04d", 101, 99, 100);
	end_category();
}

static void	test_i(void)
{
	sub_category("i");
	TEST(1, "%03i", 42);
	TEST(2, "%04i", -42);
	TEST(3, "%01i", 0);
	TEST(4, "%042i", INT_MAX);
	TEST(5, "%042i", INT_MIN);
	TEST(6, "%04i %04i %04i", 101, 99, 100);
	end_category();
}

static void	test_u(void)
{
	sub_category("u");
	TEST(1, "%03u", 42);
	TEST(2, "%04u", -42);
	TEST(3, "%04u", 0);
	TEST(4, "%010u", INT_MAX);
	TEST(5, "%010u", INT_MIN);
	TEST(6, "%03u %04u %05u", 101, 99, 100);
	end_category();
}

static void	test_x(void)
{
	sub_category("x");
	TEST(1, "%06x", 42);
	TEST(2, "%04x", 42);
	TEST(3, "%02x", 0);
	TEST(4, "%010x", -42);
	TEST(5, "%042x", -1);
	end_category();
}

static void	test_upperx(void)
{

	sub_category("X");
	TEST(1, "%03X", 42);
	TEST(2, "%02X", 42);
	TEST(3, "%02X", 0);
	TEST(4, "%010X", -42);
	TEST(5, "%042X", -1);
	end_category();
}

int	main(void)
{
	category("zero");
	test_p();
	test_d();
	test_i();
	test_u();
	test_x();
	test_upperx();
	return (0);
}
