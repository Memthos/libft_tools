/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperrine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:41:25 by mperrine          #+#    #+#             */
/*   Updated: 2025/10/24 00:52:54 by mperrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*subs;

	if (s == NULL)
		return (NULL);
	size = ft_strlen((char *) s) - start;
	if (len < size)
		size = len;
	if (ft_strlen((char *) s) < start)
		size = 0;
	subs = (char *) malloc((size + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	subs[size] = '\0';
	i = 0;
	while (i < size)
	{
		subs[i] = s[i + start];
		i++;
	}
	return (subs);
}
