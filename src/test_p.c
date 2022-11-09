/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:41 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/31 15:23:34 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf-unicorn.h"

void	test_p(void)
{
	char	*str = "Hello world !";
	void	*ptr;

	ptr = malloc(sizeof(ptr) * 1);
	category("p");
	TEST(1, "%p", str);
	TEST(2, "%p %p", str, ptr);
	TEST(3, "%p %p", str, NULL);
	TEST(4, "%p %p", ptr, NULL);
	TEST(5, "%p", NULL);
	TEST(6, "%p", (void *)LONG_MAX);
	TEST(7, "%p", (void *)LONG_MIN);
	TEST(8, "%p", (void *)42);
	free(ptr);
	end_category();
}

int	main(void)
{
	test_p();
	return (0);
}
