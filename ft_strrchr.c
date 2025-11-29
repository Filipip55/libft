/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:44:47 by icoman            #+#    #+#             */
/*   Updated: 2025/11/29 15:18:27 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
int main()
{
	printf("ft version:   %s\n", ft_strrchr("se giri l'angolo rimettilo a posto", 's'));
	printf("ft version:   %s\n", ft_strrchr("se giri l'angolo ri\0mettilo a posto", '\0'));
	printf("libc version: %s\n", strrchr("se giri l'angolo rimettilo a posto", 's'));
	printf("libc version: %s\n", strrchr("se giri l'angolo ri\0mettilo a posto", '\0'));
	return 0;
}
*/