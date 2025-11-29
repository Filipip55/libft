/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:54:32 by icoman            #+#    #+#             */
/*   Updated: 2025/11/29 14:43:48 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	printf("ft version:   %s\n", ft_strchr("se giri l'angolo rimettilo a posto", 'g'));
	printf("ft version:   %s\n", ft_strchr("se giri l'angolo ri\0mettilo a posto", '\0'));
	printf("libc version: %s\n", strchr("se giri l'angolo rimettilo a posto", 'g'));
	printf("libc version: %s\n", strchr("se giri l'angolo ri\0mettilo a posto", '\0'));
	return 0;
}
*/