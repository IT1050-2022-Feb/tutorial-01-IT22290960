
/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1 , mark2 , sum , avg ;//declaring variable for mark1,mark2,sum and avg
  
  printf("Enter subject 1 mark :");//prompt
  scanf("%f" , &mark1);//read mark 1 value
  
  printf("Enter subject 2 mark :");//prompt
  scanf("%f" , &mark2);//read mark 2 value
  
  sum = mark1 + mark2 ; //calculate sum
  avg = sum/2.0 ;//calculate average

  printf("Average is : %.2f", avg);//print average 
  
  return 0;
}//end main function

