#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    char choice;
    srand(time(NULL));

    printf("\t\t\tWelcome to Roll the Dice\n");
    printf("Enter 'r' to roll the dice\n");
    printf("Enter 'c' to close the program\n");

    do
    {
        scanf("%c", &choice);
        if (choice == 'r')
        {
            n = rand() % 6 + 1;
            printf("The rolling no is %d\n", n);
        }
    } while (choice != 'c');

    return 0;
}