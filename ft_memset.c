/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:46:08 by icoman            #+#    #+#             */
/*   Updated: 2025/11/27 19:53:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	while (n--)
		*d++ = (unsigned char)c;
	return (s);
}

/*
int main()
{
	char s1[] = "MEOW";
	char s2[] = "MEOW";
	ft_memset(s1, 'a', 4);
	printf("ft version: %s\n", s1);
	memset(s2, 'a', 4);
	printf("libc version: %s\n", s2);
	return 0;
}
*/