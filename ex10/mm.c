#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    while(av[1][i] != '\0')
    {
        printf("%c", av[1][i] - 10);
        i++;
    }
}