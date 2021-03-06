/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:48:09 by chpark            #+#    #+#             */
/*   Updated: 2021/09/23 14:55:55 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (nb == (i * i))
		return (i);
	if (nb > (i * i))
		return (ft_recur(int nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_recur(nb, 0));
}
