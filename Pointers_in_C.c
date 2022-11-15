#include <stdio.h>

void update(int *a,int *b) {
     int sum,diff;
     sum = *a+*b;
     diff = abs(*a-*b);
    /*abs () function is a predefined function in the stdlib.h
   header file to return the absolute value of the given integers.
   The absolute value of -35 is 35.*/
     *a = sum;
     *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);//Function calling
    printf("%d\n%d", a, b);

    return 0;
}
