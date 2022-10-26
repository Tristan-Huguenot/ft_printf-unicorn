/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_combined.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 21:02:48 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

static void	test_c(void)
{
	sub_category("c");
	TEST(1, "%-2c %2c", 'q', 'q');
	TEST(2, "%1c %-1c", 'q', 'q');
	end_category();
}

static void	test_s(void)
{
	char	*str = "Hello World !";

	sub_category("s");
	TEST(1, "%-4.3s", str);
	TEST(2, "%4.3s", str);
	TEST(3, "%-4.4s", str);
	TEST(4, "%4.4s", str);
	TEST(4, "%3.3s", NULL);
	end_category();
}

static void	test_p(void)
{
	sub_category("p");
	TEST(1, "%+.3p", 42);
	TEST(2, "%+.3p", 0);
	TEST(3, "% .3p", 10);
	TEST(4, "%6.3p", 101);
	TEST(5, "%-6.3p", 1010);
	TEST(6, "% .3p", 42);
	TEST(7, "%6.3p", 42);
	TEST(8, "%18.14p", -1);
	TEST(9, "%-6.3p", 42);
	TEST(10, "%-6.3p", NULL);
	TEST(11, "%-+6.3p", 42);
	TEST(12, "% 6.3p", 42);
	TEST(13, "% 06.3p", 42);
	TEST(14, "% 012.3p", 42);
	end_category();
}

static void	test_d(void)
{
	sub_category("d");
	TEST(1, "%+.3d", 42);
	TEST(2, "%+.4d", -42);
	TEST(3, "% .3d", 10);
	TEST(4, "%6.6d", -101);
	TEST(5, "%-6.6d", 1010);
	TEST(6, "% .3d", 42);
	TEST(7, "% .3d", -42);
	TEST(8, "%20.15d", INT_MAX);
	TEST(9, "%-20.15d", INT_MIN);
	TEST(10, "%-6.3d", -42);
	TEST(11, "%-6.3d", 0);
	TEST(12, "%-+6.3d", 42);
	TEST(13, "% 6.3d", 42);
	TEST(14, "%+06.3d", 42);
	TEST(15, "%+06.3d", -42);
	end_category();
}

static void	test_i(void)
{
	sub_category("i");
	TEST(1, "%+.3i", 42);
	TEST(2, "%+.4i", -42);
	TEST(3, "% .3i", 10);
	TEST(4, "%6.6i", -101);
	TEST(5, "%-6.6i", 1010);
	TEST(6, "% .3i", 42);
	TEST(7, "% .3i", -42);
	TEST(8, "%20.15i", INT_MAX);
	TEST(9, "%-20.15i", INT_MIN);
	TEST(10, "%-6.3i", -42);
	TEST(11, "%-6.3i", 0);
	TEST(12, "%-+6.3i", 42);
	TEST(13, "% 6.3i", 42);
	TEST(14, "%+06i", 42);
	TEST(15, "%+06i", -42);
	end_category();
}

static void	test_u(void)
{
	sub_category("u");
	TEST(1, "%.3u", 42);
	TEST(2, "%.4u", -42);
	TEST(3, "% .3u", 10);
	TEST(4, "%6.6u", -101);
	TEST(5, "%-6.6u", 1010);
	TEST(6, "% .3u", 42);
	TEST(7, "% .3u", -42);
	TEST(8, "%20.15u", INT_MAX);
	TEST(9, "%-20.15u", INT_MIN);
	TEST(11, "%-06.3u", 0);
	TEST(12, "%-06.3u", 42);
	TEST(13, "% 6.3u", 42);
	TEST(14, "%+06u", 42);
	TEST(15, "% 06u", 42);
	end_category();
}

static void	test_x(void)
{
	sub_category("x");
	TEST(1, "%.3x", 42);
	TEST(2, "%#.3x", 0);
	TEST(3, "% .3x", 10);
	TEST(4, "%#6.3x", 101);
	TEST(5, "%-6.3x", 1010);
	TEST(6, "% .3x", 42);
	TEST(7, "%6.3x", 42);
	TEST(8, "%#18.14x", -1);
	TEST(9, "%-6.3x", 42);
	TEST(10, "%-6.3x", NULL);
	TEST(11, "%#-+6.3x", 42);
	TEST(12, "% 6.3x", 42);
	TEST(13, "% 06.3x", 42);
	TEST(14, "% #012.3x", 42);
	end_category();
}

static void	test_upperx(void)
{
	sub_category("X");
	TEST(1, "%.3X", 42);
	TEST(2, "%#.3X", 0);
	TEST(3, "% .3X", 10);
	TEST(4, "%#6.3X", 101);
	TEST(5, "%-6.3X", 1010);
	TEST(6, "% .3X", 42);
	TEST(7, "%6.3X", 42);
	TEST(8, "%#18.14X", -1);
	TEST(9, "%-6.3X", 42);
	TEST(10, "%-6.3X", NULL);
	TEST(11, "%#-+6.3X", 42);
	TEST(12, "% 6.3X", 42);
	TEST(13, "% 06.3X", 42);
	TEST(14, "% #012.3X", 42);
	end_category();
}

int	main(void)
{
	category("combined");
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
