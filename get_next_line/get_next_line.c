#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buf;
    static char *tmp;
    char    *keep_tmp;
    char    *line;

    buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
        return (NULL);
	while (read(fd, buf, BUFFER_SIZE) != 0)
    {
        tmp = malloc(ft_strlen(buf) + 1);
        if (!tmp)
            return (NULL);
        tmp = ft_strjoin(tmp, buf);
        if (ft_strchr(tmp, '\n'))
        {
            line = malloc(ft_strlen(tmp) + ft_strlen(buf) +1);
        }
        else
            free(tmp);        
    }
    return (line);
}


int	main(void)
{
    int fd;
    char    *newline;

    fd = open("./file.txt", O_RDONLY);
    *newline = get_next_line(fd);
    return (0);
}