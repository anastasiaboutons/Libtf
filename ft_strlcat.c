size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	if (i < dsize)
	{
		while ((src[j] != '\0') && (i < dsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dsize <= i)
		return (dsize + j);
	else
		len = len + j;
	return (len);
}
