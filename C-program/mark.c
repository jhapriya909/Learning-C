
#include<stdio.h>
#include<conio.h>

int main()
{
   int m=0;
   printf("enter marks");
   scanf("%d",&m);
   if(m<=100)
   {
       if(m>=90 && m<=100)
       printf("A++");
   }
   else if(m>=80 && m<=89)
   {
       printf("A+");
   }
   else if(m>=70 && m<=79)
   {
       printf("A");
   }
   else if(m>=60 && m<=69)
   {
       printf("B");
   }
   else if(m>=50 && m<=59)
   {
       printf("C");
   }
   else{
       printf("Fail");
      
   }
   
    return 0;
}