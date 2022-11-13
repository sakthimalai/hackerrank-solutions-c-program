#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float x,y;
    scanf("%d%d",&a,&b); //input for int datatype
    scanf("%f%f",&x,&y); //input for float datatype
    printf("%d %d \n",a+b,a-b);
    printf("%0.1f %0.1f",x+y,x-y);
    
    return 0;
}
