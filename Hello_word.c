#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);// this statement is to get a sentence as an intput
    printf("Hello, World!\n%s",s);
    return 0;
}
