/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {//begining main function
  	int i , num , sum = 0 ;//declaring variable for i , num and sum
	
	printf("Enter a number :");//prompt
	scanf("%d" , &num);//read the value
	
	for(i = 0 ; i <= num ; i++){//loop
		sum = sum + i ; //calculate sum
	}
	
	printf("Sum : %d" , sum) ; //print sum
	
  return 0;
}//end main function 

