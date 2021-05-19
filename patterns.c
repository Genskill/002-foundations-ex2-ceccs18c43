#include<stdio.h>
#include<cs50.h>
int main(void)
{
 int choice,n,i,j,k;
 choice=get_int("Enter type of pattern (1 or 2) ");
 n=get_int("Number of rows");
 switch(choice)
 {
  case 1:for(i=1;i<=n;i++)
         {
            for(j=n;j>=i;j--)
              {
                printf("#");
              }
            printf("\n");
         }
         break;
  case 2:for(i=1;i<=n;i++)
         { 
           for(j=(n-i);j>0;j--)
            {
               printf(" ");
            }
           for(k=1;k<=i;k++)
           {
               printf("#");
           }
            printf("\n");          
         }
        break;
 }
}

