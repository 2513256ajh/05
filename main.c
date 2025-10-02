#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y;
    int op;
    int result;
    
    printf("Enter the calculation :");
    scanf("%i %c %i", &x, &op, &y);
    
    switch(op)
{
    case '+' :
         result = x+y;
         break;
    case '-':
         result = x-y;
         break;
         
    case '*':
         result = x*y;
         break;
         
    case '/':
         result = x/y;
         break;
    default: 
    break;
}
    
    printf("= %i",result); 
    
    
    system("PAUSE");	
    return 0;
}
