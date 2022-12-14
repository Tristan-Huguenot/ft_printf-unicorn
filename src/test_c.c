/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 20:48:06 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_c(void)
{
	category("c");
	TEST(1, "%c", '0');
	TEST(2, "%c", 0);
	TEST(3, "%c %c", '0', '1');
	TEST(4, "%c %c %c", '1', 0, '2');
	TEST(5, "%c %c %c", 0, '1', '2');
	TEST(6, "%c %c %c", '1', 0, 0);
	end_category();
}

int	main(void)
{
	test_c();
	return (0);
}
