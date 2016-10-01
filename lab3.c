//Joshua Green - Section J
//cs1040 Lab 3 
//Lab Code: Not given


#include<stdio.h>
#include<math.h>

	int main (void) {

	int a, b, c, quit; 
	float p, area;

	/* Loops the main program, -1 to exit */
	while ( quit != -1 ) {
	
	printf("Please enter a positive number.\n");
	scanf("%d", &a);
	
	while ( a <= 0 ) {
	printf("Invalid number. Please enter the number again.  \n");
	scanf("%d", &a);
	}

	printf("Please enter a second positive number.\n");
	scanf("%d", &b);

	while ( b <= 0 ) {
	printf("Invalid number. Plese enter the number again. \n");
	scanf("%d", &b);
	}

	printf("Please enter a third positive number.\n");
	scanf("%d", &c);
	
	while ( c <= 0 ) {
	printf("Invalid number. Please enter the number again. \n");
	scanf("%d", &c);
	}  
	
	/*Calculates semi-perimeter*/
	p =  (((double) a + b + c) / 2);
	
	/*Calculates the area.*/
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	
	/*Tells the area of the triangle.*/
	printf("The area of the triangle is %f. \n", area); 
	
	printf("Enter -1 to quit or virtually any other number to continue.\n");
	scanf("%d", &quit );
	}

}	 
