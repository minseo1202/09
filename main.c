#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int sum=0;
    int grade[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    printf("성적 평균 : %d\n", sum/SIZE);

    return 0;
}