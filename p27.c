#include<stdio.h>

int main()
{
    int age;
    scanf("%i",&age);
    if (age>17)
    {
        printf("you can vote");
    }
    else
    {
        printf("you can't");
    }
    return 0;
}