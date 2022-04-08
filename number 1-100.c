/*bored put a loop in a switch case break with ternary operators

same code for the tornado speed/level just added a loop

*/ 
#include <stdio.h>

int main()
{
    int random,k;
    printf("type a number from 1-100 \n");
    scanf_s("%d", &random);
    random = (random <= 30) ? (30) : (random <= 50) ? (50) : (random <= 80) ? (80) : 100;
    switch (random) {

    case 30: printf("wrong one cuhhh thats 0 - 30 \n"); break;
    case 50: printf("wrong one cuhhh thats 30 - 50 \n"); break;
    case 80: printf("wrong one cuhhh thats 50 - 80 \n"); break;
    case 100: for (k = 0; k < random; k++)
        printf("you got it right 90 - 100 \n"); break;
    }
       

    return 0;
};
