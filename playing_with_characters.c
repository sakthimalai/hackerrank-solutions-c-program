#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[20];
    char sen[100];
    
    scanf("%c",&ch);
    scanf("%s\n",s);
	//this "%[^\n]%*c" is used to get sentence as an input
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
    
}