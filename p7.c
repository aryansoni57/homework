//fku.c

#include<stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        printf("#");
        if (i==0)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("#");
            }
        }
        if (i==3)
        {
            for (int i = 0; i < 4; i++)
            {
                printf("#");
            }
            
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}