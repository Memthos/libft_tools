/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperrine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:43:24 by mperrine          #+#    #+#             */
/*   Updated: 2025/10/18 19:58:19 by mperrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		intlen;
	int		start;
	char	*s;

	intlen = ft_intlen(n);
	s = (char *) malloc((intlen + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s[intlen] = '\0';
	start = 0;
	if (n < 0)
		start = 1;
	while (intlen > start)
	{
		s[intlen - 1] = ((n % 10) * (1 - (2 * start))) + 48;
		n /= 10;
		intlen--;
	}
	if (start == 1)
	{
		s[0] = '-';
	}
	return (s);
}
