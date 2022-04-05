// tornado wind speeds 

#include <stdio.h>

int main()
{
    int tornadospeed;

    printf("type the speed of the tornado\n");
    scanf_s("%d", &tornadospeed);
    tornadospeed = (tornadospeed <= 85) ? (85) : (tornadospeed <= 110) ? (110) : (tornadospeed <= 135) ? (135) : (tornadospeed <= 165) ? (165) : (tornadospeed <= 200) ? (200) : 201;
    switch (tornadospeed) {
    case 85: printf("tornado warning EF 0 65-85mph wind \n\n"); break;
    case 110:printf("tornado warning EF 1 86-110mph wind\n\n"); break;
    case 135:printf("tornado warning EF 2 111-135mph wind\n\n"); break;
    case 165:printf("tornado warning EF 3 136-165mph wind \n\n"); break;
    case 200:printf("tornado warning EF 4 166-200mph wind \n\n"); break;
    case 201:printf("tornado warning EF 5 201+ mph wind \n\n"); break;
    }
         

    return 0;
};
