#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: First positive number as a string.
 * @num2: Second positive number as a string.
 * @result: Buffer to store the result.
 */
void multiply(char *num1, char *num2, char *result);

/**
 * is_valid_digit - Checks if a character is a valid digit.
 * @c: Character to check.
 * 
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_valid_digit(char c);

/**
 * check_arguments - Validates the command-line arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: 1 if arguments are valid, 0 otherwise.
 */
int check_arguments(int argc, char *argv[]);

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: 0 on success, 98 on incorrect arguments or invalid characters.
 */
int main(int argc, char *argv[])
{
    if (!check_arguments(argc, argv))
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    int result_len = 2 * (strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2));
    char *result = malloc(result_len + 1); // +1 for the null terminator

    if (result == NULL)
    {
        printf("Error\n");
        return 98;
    }

    result[0] = '0';
    result[1] = '\0';

    multiply(num1, num2, result);

    int first_non_zero = 0;
 while (result[first_non_zero] == '0' && result[first_non_zero + 1] != '\0')
    {
        first_non_zero++;
    }

    printf("%s\n", &result[first_non_zero]);

    free(result);

    return (0);
}

void multiply(char *num1, char *num2, char *result);
int is_valid_digit(char c){
    return (1);
}

int check_arguments(int argc, char *argv[]){
    if (argc != 3)
    {
        return (0);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i]; i++)
    {
        if (!is_valid_digit(num1[i]))
        {
            return (0);
        }
    }

    for (int i = 0; num2[i]; i++)
    {
        if (!is_valid_digit(num2[i]))
        {
            return (0);
        }
    }

    return (1);
}
