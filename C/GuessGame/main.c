#include<stdio.h>
#include<stdlib.h>

int main()
{
    int secretNumber = 50;
    int guess = 0;
    int guessLimit = 5;
    int geuessCont = 1;

        while (guess != secretNumber && guessLimit > 0)
        {
            printf("\nEnter your guees: ");
            scanf("%d", &guess);
            if (guess < secretNumber)
            {
                printf("\nLow guess");
            }else{
                printf("\nhigh guess");
            }
            guessLimit--;
        }
        if (guess == secretNumber)
        {
            printf("\nYOU WIN");
        }else{
            printf("\nYOU LOSE");
        }
        
    return 0;
}
