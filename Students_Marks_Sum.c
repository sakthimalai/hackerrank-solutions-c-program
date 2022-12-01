#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  
  int i=0,sb=0,sg=0;
  
  for(i=0; i<number_of_students; i++)
  {
      if(i % 2 == 0)
      {
          sb=sb+marks[i];
      }
      else 
      {
          sg=sg+marks[i];
      }
  }
  if(gender == 'b')
  {
      return sb;
  }
  if(gender == 'g')
  {
      return sg;
  }
  return 0;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
