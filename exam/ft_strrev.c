#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int temp;
	int len;
	len = ft_strlen(str) - 1;
	i = 0:
		while (len > i)
		{
			temp = str[i];
			str[i] = str[len];
			str[len] = temp;
			i++;
			len--;
		}
	return (str);
}
