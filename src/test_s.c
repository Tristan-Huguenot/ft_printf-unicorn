/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2(char *)NULL22/1(char *)NULL/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 01:29:32 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_s(void)
{
	char	*str1 = "Hello";
	char	*str2 = " World";
	char	*str3 = " !";

	category("s");
	TEST(1, "%s", str1);
	TEST(2, " %s %s ", str1, str2);
	TEST(3, "%s %s %s %s", str1, str2, "", str3);
	TEST(4, "%s %s %s %s", "", "", "", "");
	TEST(5, "%s %s %s %s", NULL, str1, str2, str3);
	TEST(6, "%s %s %s %s", str1, str2, str3, NULL);
	TEST(7, "%s %s %s %s", NULL, NULL, NULL, NULL);
	end_category();
}

int	main(void)
{
	test_s();
	return (0);
}
