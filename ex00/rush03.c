/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradules <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:43:30 by rradules          #+#    #+#             */
/*   Updated: 2022/11/05 15:26:46 by rradules         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		f;
	int		c;
	char	cc;

	f = 0;
	while (f < y)
	{
		c = 0;
		while (c < x)
		{
			if ((f == 0 && c == 0) || (f == y - 1 && c == 0))
				cc = 'A';
			else if ((f == 0 && c == x - 1) || (f == y - 1 && c == x - 1))
				cc = 'C';
			else if ((f != 0 && f != y - 1) && (c != 0 && c != x - 1))
				cc = ' ';
			else
				cc = 'B';
			ft_putchar(cc);
			c++;
		}
		write (1, "\n", 1);
		f++;
	}
}
