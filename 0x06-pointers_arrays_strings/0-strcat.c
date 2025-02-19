#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move ptr to the end of dest */
    while (*ptr)
        ptr++;

    /* Copy src to dest */
    while (*src)
        *ptr++ = *src++;

    /* Add null terminator */
    *ptr = '\0';

    return dest;
}

