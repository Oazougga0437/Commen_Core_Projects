#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned char       *dst;
    const unsigned char *sr;

    if (!dest && !src)
        return (NULL);

	dst = (unsigned char *)dest;
    sr = (const unsigned char *)src;
    i = 0;

    if (dst > sr && dst < sr + n)
    {
        while (n > 0)
        {
            dst[n - 1] = sr[n - 1];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            dst[i] = sr[i];
            i++;
        }
    }

    return (dest);
}