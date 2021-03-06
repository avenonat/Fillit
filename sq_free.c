/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sq_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:13:23 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 10:36:11 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	sq_free(char **sq, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(sq[i]);
	free(sq);
}
