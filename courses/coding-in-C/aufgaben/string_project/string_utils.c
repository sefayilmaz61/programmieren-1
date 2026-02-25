#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>

size_t custom_len(const char *s)
{
    if (s == NULL)
    {
        return 0;
    }

    size_t len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

        return len;    
}

char *read_line_dynamic(void)
{

}
