#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
    int wrd, a, b;

    wrd = 0;
    b = 0;

    for (a = 0; s[a] != '\0'; a++)
    {
        if (s[a] == ' ')
            wrd = 0;
        else if (wrd == 0)
        {
            wrd = 1;
            b++;
        }
    }
    return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    char **flag, *tmp;
    int i, k = 0, len = 0, words, c = 0, begin, end;

    while (*(str + len))
        len++;
    words = count_word(str);
    if (words == 0)
        return (NULL);

    flag = (char **) malloc(sizeof(char *) * (words + 1));
    if(flag == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(c)
            {
                end = i;
                tmp = (char *) malloc(sizeof(char) * (c + 1));
                if (tmp == NULL)
                    return(NULL);
                while(begin < end)
                    *tmp++ = str[begin++];
                *tmp = '\0';
                flag[k] = tmp - c;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            begin = i;
    }
    flag[k] = NULL;
    return(flag);
}