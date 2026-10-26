size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize != 0)
	{
		while ((i < dsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst [i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
