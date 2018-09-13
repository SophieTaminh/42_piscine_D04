/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:49:20 by staminh           #+#    #+#             */
/*   Updated: 2018/09/13 15:51:36 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int sortie;

	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb <= 1)
		return (1);
	sortie = nb;
	while (nb > 1)
	{
		sortie = sortie * (nb - 1);
		nb--;
	}
	return (sortie);
}
