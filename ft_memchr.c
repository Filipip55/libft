/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:19:58 by icoman            #+#    #+#             */
/*   Updated: 2025/11/29 18:50:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

int main()
{
	printf("ft version:   %p\n", ft_memchr("se giri l'angolo rimettilo a posto", 's', 3));
	printf("libc version: %p\n", memchr("se giri l'angolo rimettilo a posto", 's', 3));
	return 0;
}