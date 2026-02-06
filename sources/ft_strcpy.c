char	*ft_strcpy(char *s)
{
	char	*cpy;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	cpy = malloc (sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
