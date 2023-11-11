/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lny-tina <lny-tina@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:13:40 by lny-tina          #+#    #+#             */
/*   Updated: 2023/11/11 12:13:40 by lny-tina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	if (nb == 0 && power > 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	base;
	int	exponent;

	base = 2;
	exponent = 3;
	printf("%d^%d = %d\n", base, exponent, ft_recursive_power(base, exponent));
	base = 5;
	exponent = 0;
	printf("%d^%d = %d\n", base, exponent, ft_recursive_power(base, exponent));
	return (0);
}
