#include "get_next_line.h"

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	if ((char)c == '\0')
		return (0);
	return (NULL);
}

size_t ft_strlen(char *str)
{
    int i;
    while (str[i])
    i++;
    return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	slen;

	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		new = malloc(1);
		if (!new)
			return (NULL);
		return (new[0] = '\0', new);
	}
	if (len > slen - start)
		len = slen - start;
	new = malloc((sizeof(char)) * (len + 1));
	if (!new)
		return (NULL);
	i = start;
	while (j < len && s[i])
		new[j++] = s[i++];
	return (new[j] = '\0', new);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc(len1 + len2 + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}
//una a recupera
//stock le rest
// verifica si hemos llegao al \n