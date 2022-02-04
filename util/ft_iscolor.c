/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscolor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookim <yookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:20:52 by hyeonsok          #+#    #+#             */
/*   Updated: 2022/02/04 22:07:36 by yookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftx.h"

int	ft_iscolor(t_color color)
{
	return (ft_isinscope(color.r, 1.0, 0.0) && ft_isinscope(color.g, 1.0, 0.0) \
		&& ft_isinscope(color.b, 1.0, 0.0));
}
