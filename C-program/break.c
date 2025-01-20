#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=50; i<=1; i-=2)
    {
        if(i<=10)
        {
            for(int j=i; j<=1; j=j-30)
            {
                printf("%d",i);
            }
            
        }
        else{
            break;
        }

    }
}