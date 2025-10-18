int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && (*s1 || *s2))
		if (s1[i] != s2[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
	return (0);
}
