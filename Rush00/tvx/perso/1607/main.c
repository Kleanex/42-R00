/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:02:07 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/16 17:06:39 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar (char c)
{  
	write(1, &c, 1);
}         

void	rush(int x, int y)
{
	int	x1;
	int y1;

	x1 = x;
 	y1 = y;	
	
	y1 = 0;
	while (++y1 <=y)
	{
		x1 = 0;
		while (x1++ <=x)
		{
			if	((y1 < y && y1 > 1) && (x1 < x && x1 > 1))
				ft_putchar(' ');
			if	(((y1 == 1 || y1 == y) && (x1 > 1 && x1 < x))
				|| ((x1 == 1 || x1 == x) && (y1 > 1 && y1 < y)))
				ft_putchar('B');
			if ((y1 == 1 && x1 == 1) || (y1 == y && x1 == x && y > 1 && x > 1))
				ft_putchar('A');
			if ((y1 == 1 && x1 == x && x > 1) || (x1 == 1 && y1 == y && y > 1))
				ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(4,6);
	return (0);
}
