#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(void)
{
    printf("Enter a line: ");

    char *line = read_line_dynamic();

    if (line == NULL) 
    {
        printf("Error reading input or memory allocation failed.\n");
        return 1;
    }

    printf("You entered: \"%s\"\n", line);
    printf("Length (custom_len): %zu\n", custom_len(line));

    free(line);

    return 0;

}