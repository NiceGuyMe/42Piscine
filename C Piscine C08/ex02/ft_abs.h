/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lny-tina <lny-tina@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:36:43 by lny-tina          #+#    #+#             */
/*   Updated: 2023/11/20 17:50:50 by lny-tina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(Value) ({ \
	int res; \
	if (Value < 0) { \
	res = Value * (-1); \
	} \
	else { \
	res = Value; \
	} \
	res; \
	})
