//Joshua Green
//Homework 1


#include<stdio.h>

int main (void)
{

	int myinput;
	int income;
	int aftertax;
	int netincome;

	printf("Filing Status \n");
	printf("(1) Single \n");
	printf("(2) Married \n");
	printf("(3) Head of Household \n");
	printf("(0) Quit Program. \n");
	scanf("%d", &myinput);

	while ( myinput <= -1){
	printf("Invalid choice, make a selection again. \n");
	printf("Filing Status \n");
        printf("(1) Single \n");
        printf("(2) Married \n");
        printf("(3) Head of Household \n");
        printf("(0) Quit Program. \n");
        scanf("%d", &myinput);
	}

	while ( myinput >= 4){
	printf("Invalid choice, make a selection again. \n");
	printf("Filing Status \n");
	printf("(1) Single \n");
	printf("(2) Married \n");
	printf("(3) Head of Household \n");
	printf("(0) Quit Program. \n");
	scanf("%d", &myinput);
	}

	printf("Enter the annual income. \n");
	scanf("%d", &income);
 
	switch (myinput)
	{
	
		case 1:
			while (income <= 20000)
			{
			printf("Your tax rate is 10%. \n");
			aftertax = (float) (income * .10)/100;
			printf("You pay %f in taxes. \n", &aftertax);
			netincome = (float) income - (income * aftertax)/100;
			printf("After taxes your net incomes is %f \n", &netincome);
			}		
		break;
				
			while (income <= 50000)
			{
			printf("Your tax rate is 20%. \n");
			aftertax = (float) (income * .20)/100;
			printf("You pay %f in taxes. \n", &aftertax);
			netincome = (float) income - (income - aftertax)/100;
			printf("After taxes your net income is %f \n", &netincome);
			}
		break;
	
 	}
}


