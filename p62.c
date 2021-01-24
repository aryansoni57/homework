//write the    program to print 3 digit armstrong number where range is given by user
#include<stdio.h>
#include<math.h>
int main ()
{
    int a , p,r,i,j, sd;
    printf("enter the range = ");//max limit of range is 999
    scanf("%d",&a);
    for(i= 100;i<a;++i)
    {
        
       
       j = i;
        while(j>0)
        {
           r = j%10;
           sd = (r*r*r)+sd;
           j = j/10;    
        
        if(sd==i)
        {
            printf("%d\n",sd);
        }
        sd =0;
        }
    }
    return 0;
}
