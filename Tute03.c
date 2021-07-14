/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

//initializing the variables 
  int i , num , sum = 0 ;
  
  printf("Input number :");
  scanf("%d", &num );

  for(i = 1 ; i <= num ; i++)
  {
    sum = sum + i ;//calculating the sum
    
  }
    printf("sum of 1st natural numbers %d" , sum );//output the sum
  
  return 0;
}

