
#include <stdlib.h>

int			ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

char		*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;
	int		i;

	src_len = ft_len(src);
	if ((dest = (char*)malloc(sizeof(char) * (src_len + 1))))
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;		
		}
	}
	dest[i] = '\0';
	return (dest);
}