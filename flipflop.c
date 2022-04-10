// the thing with the other thing short little funct
#include <stdio.h>


int random, k;

int flipflop() {

    random = (random <= 30) ? (30) : (random <= 50) ? (50) : (random <= 80) ? (80) : 100;
    switch (random) {

        case 30: printf("wrong one cuhhh thats 0 - 30 \n"); break;
    
         case 50: printf("wrong one cuhhh thats 30 - 50 \n"); break;
    
          case 80: printf("wrong one cuhhh thats 50 - 80 \n"); break;
    

          case 100: for (k = 0; k < random; k++)
             printf("you got it right 90 - 100 \n"); break;
    }

}


int main()
{
    printf("type a number from 1-100 \n");
    
    scanf_s("%d", &random);
    
    flipflop();


    return 0;
};

