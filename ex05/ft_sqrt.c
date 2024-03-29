/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:23:27 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/26 16:28:04 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	while (a * a != nb)
	{
		if (a >= 46340)
			return (0);
		a++;
	}
	return (a);
}
