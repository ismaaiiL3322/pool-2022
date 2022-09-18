#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    char    *p;

    p = malloc(ft_strlen(src + 1) * sizeof(char));

    if (!(p))
        return (0);

    i = 0;
    while (src[i] != '\0')
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}
int main()
{
    char    src[] = "ismail";
    char *p;
    p = src;
    printf(":%s:\n", ft_strdup(p));
    printf(":%s:", strdup(p));
}
