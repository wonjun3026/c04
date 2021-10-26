/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:33:24 by wjo               #+#    #+#             */
/*   Updated: 2021/10/26 17:41:31 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int base_chk(char *base)
{
	int	len;
	int	chk[256];
	int	i;

	while (*str)
		len++;
	if (len == 0 || len == 1)
		return (1);
	while (i = 0 < 256)
	{
		i++;
		chk[i] = 0;
	}
	len = 0;
	while (base[len])
	{
		i = base[len];
		if (base[len] == '+' || base[len] == '-' || chk[i])
			return (0);
		chk[i] = 1;
		len++;
	}
	if ((*base >= 9 && *base <= 13) || *base == 32)
		return (0);
	return (len);
}

int	base(char *nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
}
