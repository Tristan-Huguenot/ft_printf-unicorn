/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 20:49:02 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_i(void)
{
	category("i");
	TEST(1, "%d", 42);
	TEST(2, "%d", 0);
	TEST(3, "%d %d", INT_MIN, INT_MAX);
	TEST(4, "%d %d %d", -42, 0, 42);
	TEST(5, "%d %d %d", 0, 0, 0);
	end_category();
}

int	main(void)
{
	test_i();
	return (0);
}
