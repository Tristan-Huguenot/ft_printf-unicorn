/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/26 17:28:24 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_null(void)
{
	category("null");
	TEST(1, NULL, 0);
	end_category();
}

int	main(void)
{
	test_null();
	return (0);
}
