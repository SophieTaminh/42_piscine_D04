/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:52:33 by staminh           #+#    #+#             */
/*   Updated: 2018/09/13 15:54:06 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int r;

	r = 0;
	while (r < nb)
	{
		r = i * i;
		if (r == nb)
			return (i);
		i = i + 1;
	}
	return (0);
}