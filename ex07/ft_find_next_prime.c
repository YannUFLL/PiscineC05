/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:12:02 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/26 23:27:50 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int		a;
	_Bool	prime;

	prime = 1;
	if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	while (prime)
	{
		a = 2;
		while (a <= nb - 1)
		{
			if ((nb % a) == 0)
			{
				prime = 1;
				break ;
			}
			else
				prime = 0;
			a++;
		}
		if (prime != 1)
			return (nb);
		nb++;
	}
	return (0);
}
