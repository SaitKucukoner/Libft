#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t destlen;
    size_t srclen;
    size_t i;

    destlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    i = 0;
    if (size <= destlen)
        return (size + srclen);
    while (src[i] && destlen + i < size - 1)
    {
        dst[destlen + i] = src[i];
        i++;
    }
    dst[destlen + i] = '\0';
    return (destlen + srclen);
}
