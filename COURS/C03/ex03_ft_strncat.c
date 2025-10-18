char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ret;
	unsigned int	i;

	ret = dest;
	i = -1;
	while (*dest)
		dest++;
	while (*src && ++i < nb)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}