//Joshua Green - lab 4 
//No lab code give


#include<stdio.h>

int main (void){
	
	// Initialize all variables
	int counter;
	int i;
	int min = 10000000;
	int num;
	int max = 0; 
	int total = 0;
	float mean;

	//Determine the input size
	printf("Enter the input size. \n");
	scanf("%d", &counter);

	//Error checking for negative input numbers
	while ( counter <= 0 ){
	printf("Invalid input enter the input size again. \n");
	scanf("%d", &counter);
	}
 
	//Collects number of inputs determined by user previously
	for (i = 0; i < counter; i++){
	printf("Enter a positive integer. \n");
	scanf("%d", &num);

	while ( num <= -1 ){
	printf("Invalid number, enter a positive number. \n");
	scanf("%d", &num);
	}

	total = total + num;

	//Determine the minimum and maximum value
	if ( num > max ){
	max = num;
	}
	if (num < min ){
	min = num;
	}
	}

	//Calculate the mean and print the statements
	mean = (float)total/counter;
	printf("The mean of the numbers is %f \n", mean);
	printf("The largest number is %d. \n", max);
	printf("The smallest number is %d. \n", min); 


}
