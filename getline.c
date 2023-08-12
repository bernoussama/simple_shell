#include "shell.h"
/**
 * _getline - get line
 * @lineptr: pointer to line
 * @n: number of characters
 * @stream: pointer to stream
 * Return : line number
*/
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
    int c;
    size_t pos = 0;

    if (lineptr == NULL || n == NULL)
    {
        errno = EINVAL;
        return (-1);
    }
    if (*lineptr == NULL || *n == 0)
    {
        *n = 128;
        *lineptr = (char *)malloc(*n);
        if (*lineptr == NULL)
            return (-1);
    }
    while (1)
    {
        c = fgetc(stream);
        if (c == EOF)
        {
            if (pos == 0)
                return (-1);
            else
                break;
        }
        if (pos >= *n - 1)
        {
            char *new_lineptr;
            *n *= 2;
            new_lineptr = (char *)realloc(*lineptr, *n);
            if (new_lineptr == NULL)
                return (-1);
            
            *lineptr = new_lineptr;
        }
        (*lineptr)[pos++] = c;
        if (c == '\n')
            break;
    }
    (*lineptr)[pos] = '\0';
    return (pos);
}
