/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:42:23 by icoman            #+#    #+#             */
/*   Updated: 2025/11/26 18:19:19 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	const char *s = "I LOVE TATE MCRAE";
	printf("ft version \n");
	printf("%d\n", ft_strlen(s));
	printf("libc version \n");
	printf("%d\n", strlen(s));
}
*/