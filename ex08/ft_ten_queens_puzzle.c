/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:14:23 by chpark            #+#    #+#             */
/*   Updated: 2021/09/23 15:40:12 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_puzzle_check(int map[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == table[i])
			return (0);
		if (i + table[i] == x + y)
			return (0);
		if (i - table[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	return (0);
}
