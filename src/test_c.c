/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:58 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_c(void)
{
	category("c");
	test(1, "%s\n", "Hello World !");
	end_category();
}

int	main(void)
{
	test_c();
	return (0);
}
