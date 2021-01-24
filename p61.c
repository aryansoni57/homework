 //write the program to identify strong number
 #include<stdio.h>
 int main()
 {
     int a ,rem, sum, temp, total = 0;
     printf("enter the num you want to identify = ");
     scanf("%d",&a);
     temp = a;
     while(a>0){
        // rem = a%10;
        sum = 1;
         for(int i =1 ; i<=a%10 ; i++)
         {
             sum = sum*i;
         }
         total = total+sum;
         a= a/10;
     }
     if(total==temp)
     {
         printf("given number is strong number");
     }
     else 
     {
         printf("given number is not strong number %d", total);
     }
    return 0;
 }
