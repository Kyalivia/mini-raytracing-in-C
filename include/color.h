/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookim <yookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:29 by hyeonsok          #+#    #+#             */
/*   Updated: 2022/02/04 22:14:34 by yookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

typedef struct s_color {
	double	t;
	double	r;
	double	g;
	double	b;
}	t_color;

t_color	color(double t, double r, double g, double b);
t_color	col_mult(t_color col1, double t);
t_color	col_plus(t_color col1, t_color col2);
t_color	col_min(t_color col1, t_color col2);
t_color	col_multc(t_color c1, t_color c2);

#endif
