/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:37:27 by chpark            #+#    #+#             */
/*   Updated: 2021/09/22 17:45:03 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fr_recur(int index, int i, int j)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (j);
	if (index > 1)
		return (ft_recur(index - 1, j, i + j));
	else
		return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_recur(index, 0, 1));
}
