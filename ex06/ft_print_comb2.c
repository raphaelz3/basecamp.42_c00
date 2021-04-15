/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:55:49 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/08 15:25:50 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print(int x)
{
	char div;
	char mod;

	div = x / 10 + '0';
	mod = x % 10 + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			write(1, " ", 1);
			ft_print(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
