/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lny-tina <lny-tina@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:04:57 by lny-tina          #+#    #+#             */
/*   Updated: 2023/11/14 10:10:31 by lny-tina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*response;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	response = malloc(size);
	i = 0;
	while (i <= size)
	{
		response[i] = min + i;
		i++;
	}
	response[size] = '\0';
	return (response);
}
