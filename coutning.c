// just counts hello worlds and reaches a number and says smth

#include <stdio.h>

int main()
{
    int hello, i;

    printf("hello world number ");
    scanf_s("%d", &hello);
    for (i = 0; i < hello; i++)
        printf("hello world %d \n", i);
    hello--;

    if (hello > 50 ) {
        printf("your a jew \n ");
    }
        
        
 
    return 0;
};
