/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-unicorn.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:48:54 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/25 18:54:16 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UNICORN_H
# define FT_PRINTF_UNICORN_H

# include "ft_printf.h"
# include <stdio.h>

# define test(n, string, ...) printf("\ntest - %d\n", n); printf("\nprintf:\n"); printf(string, __VA_ARGS__); printf("ft_printf:\n"); ft_printf(string, __VA_ARGS__);

void	category(char *s);
void	end_category(void);

#endif
