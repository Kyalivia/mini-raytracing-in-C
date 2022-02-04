/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isunitvec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookim <yookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:21:10 by hyeonsok          #+#    #+#             */
/*   Updated: 2022/02/04 22:08:31 by yookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

#define MARGIN_OF_ERROR 0.1f

int	ft_isunitvec(t_vec vec)
{
	double	res;

	res = vec.i * vec.i + vec.j * vec.j + vec.k * vec.k;
	if (res < 1.f - MARGIN_OF_ERROR || res > 1.f + MARGIN_OF_ERROR)
		return (0);
	return (1);
}
