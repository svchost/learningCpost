// short little write with ? : operators prints the answer how many times the answer is. i find this to be aids as hell to learn

#include <stdio.h>

int main()
{
    
    int a = 10, b = 20, answer, k;
    
    answer = (a == 10 ? (b == 20 ? 5 : 1 ) : 0);
        for (k = 0; k < answer; k++)
            printf("awnser is %d \n", answer);
    
    return 0;
};
