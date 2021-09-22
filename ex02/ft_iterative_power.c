/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:55:15 by chpark            #+#    #+#             */
/*   Updated: 2021/09/22 17:36:59 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0)
		return (1);
	if (nb <= 0)
		return (0);
	else
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}
