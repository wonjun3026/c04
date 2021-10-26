/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:04:26 by wjo               #+#    #+#             */
/*   Updated: 2021/10/26 19:19:05 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base1(char *base);
void	print1(long long nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);

int	g_len;


#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base)
{
	long long	llnbr;

	if ((base1(base) || g_len == 0 || g_len == 1))
		return ;
	llnbr = nbr;
	if (llnbr < 0)
	{
		write (1, "-", 1);
		llnbr *= -1;
	}
	print1(llnbr, base);
}

int	base1(char *base)
{
	int	chk[256];
	int	i;

	i = 0;
	while (i < 256)
	{
		chk[i] = 0;
		i++;
	}
	g_len = 0;
	while (base[g_len])
	{
		i = base[g_len];
		if (base[g_len] == '+' || base[g_len] == '-' || chk[i])
			return (1);
		chk[i] = 1;
		g_len++;
	}
	return (0);
}

void	print1(long long nbr, char *base)
{
	int	a;

	if (nbr < 0)
		return ;
	a = nbr % g_len + '0';
	print1(nbr / g_len, base);
}

int	main(void)
{
	ft_putnbr_base(10, "01");
}
