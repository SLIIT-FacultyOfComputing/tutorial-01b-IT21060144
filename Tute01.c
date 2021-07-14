/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
//defining variables
  float mark1 , mark2 , avg ;
//input marks
    printf("Input two marks :");
    scanf("%f%f" , &mark1 , &mark2);
//calculating average
    avg = (mark1 + mark2)/2;

    printf("Average is = %.2f" , avg);

  return 0;
}

