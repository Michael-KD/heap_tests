#include <stdio.h>

int main(int argc, char **argv) 
{
    int d = 2;
    printf("Welcome to a program with a bug!\n");

    scanf("%d", d);

    printf("You entered %d\n", d);
    return 0;
}