/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:39:35 by cbaillat          #+#    #+#             */
/*   Updated: 2017/11/23 19:21:53 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static uint32_t	ft_get_min_size(t_tetri *tetriminos)
{
	uint32_t	size;

	if (tetriminos == NULL)
		return (FAILURE);
	while (tetriminos->next != NULL)
		++size;

}
