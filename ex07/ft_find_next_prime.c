/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:39:16 by staminh           #+#    #+#             */
/*   Updated: 2018/09/13 16:00:21 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime_number(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
		return (0);
	if ((nb % 2 == 0 && nb != 2) || (nb % 3 == 0 && nb != 3) || (nb < 0))
	{
		return (0);
	}
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_prime_number(nb) == 0)
		nb = nb + 1;
	return (nb);
}
