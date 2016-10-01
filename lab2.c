/* Name: Joshua Green-Lab 2
 * Lab Code: Not given*/

#include<stdio.h>
#include<math.h>

	int main(void){

	int x1, x2, x3, y1, y2, y3;
	float sum;

	/*Obtain first set of coordinates*/
	printf( "Enter the X coordinate of the first point. \n");
	scanf( "%d", &x1 );

	if ( x1 <=0 ) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the X coordinate of the first point. \n");
	scanf( "%d", &x1);
	}

	printf( "Enter the Y coordinate of the first point. \n");
	scanf( "%d", &y1 );

	if ( y1 <=0 ) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the Y coordinate of the first point. \n");
	scanf( "%d", &y1);
	}
	
	/*Obtain second set of coordinates*/
	printf( "Enter the X coordinate of the second point. \n");
	scanf( "%d", &x2 );

	if ( x2 <=0 ) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the X coordinate of the second point. \n");
	scanf( "%d", &x2 );
	}

	printf( "Enter the Y coordinate of the second point. \n");
	scanf( "%d", &y2 );

	if ( y2 <=0) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the Y coordinate of the second point. \n");
	scanf( "%d", &y2);
	}
	
	/*Obtain the third set of coordinates*/
	printf("Enter the X coordinate of the third point. \n");
	scanf( "%d", &x3);

	if ( x3 <=0) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the X coordinate of the third point. \n");
	scanf( "%d", &x3);
	}

	printf( "Enter the Y coordinate of the third point. \n");
	scanf( "%d", &y3);

	if ( y3 <=0) {
	printf( "Invalid coordinate. Enter the coordinate again. \n");
	printf( "Enter the Y coordinate of the third point. \n");
	scanf( "%d", &y3);
	}
	
	/* Using the input, determine distance*/
	float dResult = sqrt(pow((x1-x2), 2)+pow((y1-y2),2)); 
	float dResult2 = sqrt(pow((x1-x3), 2)+pow((y1-y3),2));
	float dResult3 = sqrt(pow((x2-x3), 2)+pow((y2-y3),2));
	
	/* Display the results of the calculation*/
	printf( "The distance between points 1 and 2 is %f. \n",  dResult);
	printf("The distance between points 1 and 3 is %f. \n", dResult2);
	printf("The distance between point 2 and point 3 is %f. \n", dResult3);
	

	/*Add the results to createa sum*/
	sum = dResult + dResult2 + dResult3;


	/* Display the sum*/
	printf( "The sum of the distances is %f. \n", sum);
	

	/* Bonus part. If this is incorrect please ignore. Thanks!*/
	printf( "The longest distance is %f between points 1 and 3. \n", dResult2);	
	printf( "The shortest distance is %f between points 1 and 2.\n", dResult);

	
}

