/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_space.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 13:51:59 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_s(void)
{
	char	*str = "Hello World !";

	sub_category("s");
	TEST(1, "% s", str);
	TEST(2, "% s % s ", str, "");
	TEST(3, "% s % s", NULL, "");
	TEST(4, "% s % s", "", "");
	TEST(5, "% s % s", NULL, NULL);
	end_category();
}


static void	test_p(void)
{
	char	*str = "Hello World !";

	sub_category("p");
	TEST(1, "% p", str);
	TEST(2, "% p", 42);
	TEST(3, "% p", NULL);
	TEST(4, "% p", 0);
	end_category();
}

static void	test_d(void)
{
	sub_category("d");
	TEST(1, "% d", 42);
	TEST(2, "% d", -42);
	TEST(3, "% d", 0);
	TEST(4, "% d", INT_MAX);
	TEST(5, "% d", INT_MIN);
	TEST(6, "% d % d % d", 101, 99, 100);
	end_category();
}

static void	test_i(void)
{
	sub_category("i");
	TEST(1, "% i", 42);
	TEST(2, "% i", -42);
	TEST(3, "% i", 0);
	TEST(4, "% i", INT_MAX);
	TEST(5, "% i", INT_MIN);
	TEST(6, "% i % i % i", 101, 99, 100);
	end_category();
}

int	main(void)
{
	category("space");
	test_s();
	test_p();
	test_d();
	test_i();
	return (0);
}
