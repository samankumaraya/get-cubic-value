#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;

  for( ; ; )
  {
    printf("Enter a number :");scanf("%d",&x);
                 if(x==0)
                     {
                       break;
                      }
            printf("\nThe cubic value is %d\n",x*x*x);
  }
    return 0;
}
