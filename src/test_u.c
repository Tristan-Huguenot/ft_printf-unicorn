/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 00:54:03 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_u(void)
{
	category("u");
	TEST(1, "%u", 42);
	TEST(2, "%u", 0);
	TEST(3, "%u %u", (unsigned int)INT_MIN, UINT_MAX);
	TEST(4, "%u %u %u", -42, 0, 42);
	TEST(5, "%u %u %u", 0, 0, 0);
	end_category();
}

int	main(void)
{
	test_u();
	return (0);
}
