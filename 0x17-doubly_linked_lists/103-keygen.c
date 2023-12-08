#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_ascii - finds the largest ASCII value in a string
 *
 * @username: username
 * @length: length of the username
 * Return: the largest ASCII value
 */
int find_largest_ascii(char *username, int length)
{
    int current_char;
    int largest_char;
    unsigned int random_number;

    current_char = *username;
    largest_char = 0;

    while (largest_char < length)
    {
        if (current_char < username[largest_char])
            current_char = username[largest_char];
        largest_char += 1;
    }

    srand(current_char ^ 14);
    random_number = rand();

    return (random_number & 63);
}

/**
 * multiply_ascii_values - multiplies each character's ASCII value in a string
 *
 * @username: username
 * @length: length of the username
 * Return: multiplied ASCII value
 */
int multiply_ascii_values(char *username, int length)
{
    int current_value;
    int result;
    int iteration;

    current_value = result = 0;

    while (iteration < length)
    {
        current_value = current_value + username[iteration] * username[iteration];
        iteration += 1;
    }

    return (((unsigned int)current_value ^ 239) & 63);
}

/**
 * generate_random_char - generates a random character
 *
 * @username: username
 * Return: a random character
 */
int generate_random_char(char *username)
{
    int random_char;
    int iteration;

    random_char = iteration = 0;

    while (iteration < *username)
    {
        random_char = rand();
        iteration += 1;
    }

    return (((unsigned int)random_char ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
    char keygen[7];
    int length, current_char, iteration;
    long alphabet[] = {
        0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
        0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
        0x723161513346655a, 0x6b756f494b646850};
    (void)argc;

    for (length = 0; argv[1][length]; length++)
        ;

    /* ----------- find_largest_ascii ----------- */
    keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];

    /* ----------- sum_ascii_values ----------- */
    current_char = iteration = 0;
    while (iteration < length)
    {
        current_char = current_char + argv[1][iteration];
        iteration = iteration + 1;
    }
    keygen[1] = ((char *)alphabet)[(current_char ^ 79) & 63];

    /* ----------- multiply_ascii_values ----------- */
    current_char = 1;
    iteration = 0;
    while (iteration < length)
    {
        current_char = argv[1][iteration] * current_char;
        iteration = iteration + 1;
    }
    keygen[2] = ((char *)alphabet)[(current_char ^ 85) & 63];

    /* ----------- find_largest_ascii (using function) ----------- */
    keygen[3] = ((char *)alphabet)[find_largest_ascii(argv[1], length)];

    /* ----------- multiply_ascii_values (using function) ----------- */
    keygen[4] = ((char *)alphabet)[multiply_ascii_values(argv[1], length)];

    /* ----------- generate_random_char (using function) ----------- */
    keygen[5] = ((char *)alphabet)[generate_random_char(argv[1])];
    keygen[6] = '\0';

    for (current_char = 0; keygen[current_char]; current_char++)
        printf("%c", keygen[current_char]);

    return (0);
}
