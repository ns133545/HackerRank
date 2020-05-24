#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a;
    char b[10];
    char c[50];
    scanf("%c",&a);
    scanf("%s",b);
    scanf("\n");
    scanf("%[^\n]*c",c);
    printf("%c\n%s\n%s",a,b,c);
    return 0;


}
