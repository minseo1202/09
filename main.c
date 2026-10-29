#include <stdio.h>

int main()
{
    int i;
    int grade[5];

    grade[0] = 100;
    grade[1] = 90;
    grade[2] = 80;
    grade[3] = 70;
    grade[4] = 60;

    for (i=0;i<5;i++)
    {
        printf("grade[%d] = %d\n", i, grade[i]);
    }
}