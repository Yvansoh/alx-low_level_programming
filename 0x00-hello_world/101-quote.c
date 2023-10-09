#include <unistd.h>
/**
 * main - A program that prints a code followed by a new line
 * Return: 1 (indicating failure)
 */

int main(void) {
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return 1;
}

