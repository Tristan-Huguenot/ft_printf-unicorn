/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-unicorn.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:48:54 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 20:25:19 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UNICORN_H
# define FT_PRINTF_UNICORN_H

# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>

# define PRINT(n) printf("\n%d\n", n);
# define TEST(n, string, ...) printf("\n\n\t[test - %d]\n", n); printf("\n-->printf:\n\n");  PRINT(printf(string, __VA_ARGS__)); printf("\n-->ft_printf:\n\n"); PRINT(ft_printf(string, __VA_ARGS__));

void	category(char *s);
void	end_category(void);
void	test_c(void);
void	test_d(void);

#endif
