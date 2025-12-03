/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:31:47 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 15:41:16 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long nbr, char *s, int index);

char    *ft_itoa(int n)
{
	size_t  digits;
    long    nbr;
    char    *s;

    nbr = n;
    digits = 0;
    while (n > 0)
    {
        n /= 10;
        digits++;   
    }
    s = (char *)malloc(digits);
    ft_putnbr(nbr, s, 0);
}

static void	ft_putnbr(long nbr, char *s, int index)
{
	if (nbr < 0)
	{
		s[index] = '-';
		nbr = nbr * -1;
		ft_putnbr(nbr, s, index + 1);
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10, s, index + 1);
		s[index] = nbr % 10 + '0';
	}
}

int main()
{
    printf("%s\n", ft_itoa(-1234567));
    return (0);
}
