/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:20:16 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/31 15:22:20 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_s(void)
{
	char	*str1 = "Hello";
	char	*str2 = " World";
	char	*str3 = " !";
	char	*null = NULL;

	category("s");
	TEST(1, "%s", str1);
	TEST(2, " %s %s ", str1, str2);
	TEST(3, "%s %s %s %s", str1, str2, "", str3);
	TEST(4, "%s %s %s %s", "", "", "", "");
	TEST(5, "%s %s %s %s", null, str1, str2, str3);
	TEST(6, "%s %s %s %s", str1, str2, str3, null);
	TEST(7, "%s %s %s %s", null, null, null, null);
	end_category();
}

int	main(void)
{
	test_s();
	return (0);
}
