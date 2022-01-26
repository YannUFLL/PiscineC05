/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:48:36 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/26 21:38:09 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;

	a = 0;
	if (index < 0)
		return (-1);
	if (index == 2)
		return (1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		index = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (index);
}
