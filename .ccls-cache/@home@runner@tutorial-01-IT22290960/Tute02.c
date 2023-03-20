/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {//begining main function 
  	int distance ;//declaring variable for diatance 
	float amount ;//declaring variable for amount
	
	printf("Enter the distance : ") ;//prompt
	scanf("%d" , &distance) ;//read value
	
	if(distance > 30){//check the value
		amount = (30 * 50.0) + (distance - 30) * 40 ; //calculate the amount
	}
	
	else{//check the value
		amount = distance * 50 ; //calculate the amount
	}
	
	printf("Amount to be paid : %.2f" , amount) ; //print amount to be paid 
	
  
  return 0;
}//end main function 
