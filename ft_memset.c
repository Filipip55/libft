/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:46:08 by icoman            #+#    #+#             */
/*   Updated: 2025/11/26 19:05:21 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *d;
	d = (char *) s;
	i = 0;
	while (i < n)
		d[i++] = c;
	return (s);
}
/*
int main(int argc, char const *argv[])
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
