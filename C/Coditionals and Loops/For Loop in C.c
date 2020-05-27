#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
 

      for(i=a;i<=b;i++)
      {
               if(i<10)
{
    switch(i)
              {
                  case 1: printf("one\n");
                  
                  case 2: printf("two\n");
                  if(b==2)
                  {break;}
                  
                  case 3: printf("three\n");
                  
                  case 4: printf("four\n");
                  
                  case 5: printf("five\n");
                  
                  case 6: printf("six\n");
                  
                  case 7: printf("seven\n");
                  
                  case 8: printf("eight\n");
    
                  case 9: printf("nine\n");
                  break;

              }break;
}
      }
          
for(i=10;i<=b;i++)
{
      if(i%2==0)
          { printf("even\n");

          }
          else
          {printf("odd\n");

          }      
          
}

    return 0;
}

