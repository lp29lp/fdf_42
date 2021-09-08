/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:27:00 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/09/07 21:27:00 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_jump
{
	int		x;
	int		y;
}	t_jump;

typedef struct s_fdf
{
	float	angle;
	void	*mlx_win;
	void	*mlx;
	void	*img_ptr;
	char	*img_data;
	int		width;
	int		height;
	int		**map;
	int		scale;
	int		proj;
	int		color;
	int		bpp;
	int		endian;
	int		size_line;
	int		shift_x;
	int		shift_y;
	int		shift_z;
}	t_fdf;

#endif