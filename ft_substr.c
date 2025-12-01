/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42firenze.it>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:06:17 by icoman            #+#    #+#             */
/*   Updated: 2025/12/01 20:26:52 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_s = malloc(len);
	if (sub_s == NULL)
		return (NULL);
	ft_strlcpy(sub_s, s + start, len);
	return (sub_s);
}
/*
int main()
{
	printf("%s\n", ft_substr("Jigsaw falling into place!", 3, 2344));
	return 0;
}
*/