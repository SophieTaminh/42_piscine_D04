/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:45:50 by staminh           #+#    #+#             */
/*   Updated: 2018/09/13 15:53:04 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int sortie;

	if ((power < 0))
		return (0);
	if (power == 0)
		return (1);
	sortie = nb;
	while (power > 1)
	{
		sortie = sortie * nb;
		power = power - 1;
	}
	return (sortie);
}
