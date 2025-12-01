/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperrine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:02:58 by mperrine          #+#    #+#             */
/*   Updated: 2025/10/25 01:48:08 by mperrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	size_t	slen;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = ft_strlen(s);
	str = (char *) malloc((slen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[slen] = '\0';
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
