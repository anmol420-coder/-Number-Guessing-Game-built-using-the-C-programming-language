#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, random;
    srand(time(0));
    random = rand() % 100 + 1;
    int nguess = 0;

    while (random != num)
    {
        printf("Guess the number : \n");
        scanf("%d", &num);

        nguess++;

        if (num < random)
        {
            printf("Guess the upper number : \n");
        }

        else if (num > random)
        {
            printf("Guess the lower number : \n");
        }

        else
        {
            printf("You guess the number in two attempt %d and the number is %d", nguess, num);
        }
    }

    return 0;
}