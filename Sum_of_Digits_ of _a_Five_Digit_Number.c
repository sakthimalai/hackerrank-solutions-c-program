#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
   int n;
   scanf("%d", &n);
   int digit, temp, sum = 0;
   temp = n;
 
   while(temp > 0)
   {
     digit = temp % 10;
     sum = sum + digit;
     temp = temp / 10;
   }
   
   printf("%d\n",sum);
   return 0;
}
/*The modulo operator, %, returns the remainder of a division. 
For example, 4 % 3 = 1 and 12 % 10 = 2.
The ordinary division operator, /, returns a truncated integer value when performed on integers. 
For example, 5 / 3 = 1. */
