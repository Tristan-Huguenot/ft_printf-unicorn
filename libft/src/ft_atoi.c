/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thugueno <thugueno@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:52:09 by thugueno          #+#    #+#             */
/*   Updated: 2022/10/17 22:52:29 by thugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	initiate_var(int *sign, int *nb, int *i, int *y)
{
	*sign = 1;
	*nb = 0;
	*i = 0;
	*y = 0;
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;
	int	i;
	int	y;

	if (!nptr)
		return (0);
	initiate_var(&sign, &nb, &i, &y);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i + y]))
	{
		nb = nb * 10 + (nptr[i + y] - '0');
		y++;
	}
	if (y > 18 && sign == 1)
		return (-1);
	else if (y > 18 && sign == -1)
		return (0);
	return (nb * sign);
}
