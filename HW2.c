//Joshua Green
//Homework Assignment 2 
//Arrays Don't Print`


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 100

int check_input(int);
void initialize_array(int [],int);
void print_array(int [],int);
void display_menu();
int check_option(int);
int common_numbers(int[], int[], int);
int count_numbers(int[], int, int);
int mode(int[], int);
void print_histogram(int[], int[], int);

int main()
	{
	int size, count;
	int array1[SIZE];
	int array2[SIZE];
	printf("Please enter the size of the input. \n");
	scanf("%d", &size);
	check_input(size);
		while (check_input(size) == 0)
			{
			printf("Invalid input, please enter the size again. \n");
			scanf("%d", &size);
			}
	int option = 1;
		while (option != 4)
		{
		initialize_array(array1, size);
		initialize_array(array2, size);
		display_menu();
		scanf("%d", &option);
			while (check_option(option) == 0)
				{
				printf("Invalid input, please enter your choice again. \n");
                        	scanf("%d", &option);
				}
		if (option == 1)
			{
			printf("Input Arrays\n");
			print_array(array1, size);
			print_array(array2, size);
			count = common_numbers(array1, array2, size);
			printf("There are %d common numbers between the two arrays. \n", count);
			}
		if (option == 2)
			{
			print_array(array1, size);
                        print_array(array2, size);
			mode(array1, size);
			printf("Mode for the first array is number %d \n", count);
			mode(array2, size);
			printf("Mode for the second array is number %d \n", count);
			}
		if (option == 3)
			{
			print_array(array1, size);
                        print_array(array2, size);
			printf("Printing histogram... \n");
			print_histogram(array1, array2, size);
			}
		}
}
		

int check_input(int size)
	{
	if (size > 100 || size < 0)
		return 0;
	else 
		return 1;
	}

void initialize_array(int array1[] , int size)
	{
	int i;
	for (i=0;i<size;i++)
		{
		array1[i] = rand()%10;
		}
	}

void print_array(int array[] , int size)
	{
	int i;
	for (i<0;i<size;i++)
		{
		printf("%d ", array[i]);
		}
	printf("\n");
	}

void display_menu()
	{
	printf("Array Operations, your options: \n");
	printf("1:Common Numbers \n");
	printf("2:Mode \n");
	printf("3: Histogram \n");
	printf("4:Exit \n");
	}

int check_option(int option)
	{
	if (option > 4 || option < 0)
		return 0;
	else
		return 1;
	}

int common_numbers(int array1[] ,int array2[], int size)
	{
	int i, j;
	int count = 0;
	for(i = 0; i <size; i++)
		{
		for(j = 0; j < size; j++)
			{
				if (array1[i] == array2[j])
					count++;
			}	
		}
	return count;
	}

int count_numbers(int array1[], int size, int search)
	{
	int i;
	int count = 0;

	for (i = 0; i < size; i++)
		{
		if(array1[i]==search)
			count++;
		}
	return count;
	}

int mode(int array1[], int size)
	{
	int i;
	int count;
	int modeCount = 0;
	int modeVal  = 0;
	for(i = 0; i < 10; i++)
		{
		count = count_numbers(array1, size, i);
		if (count > modeCount)
		{
			modeVal = i;
			modeCount = count;
		}
		}
	}

void print_histogram(int array1[],int array2[],int size)
	{
	int i, j;
	int count1, count2;
	for(i = 0; i < 10; i++)
		{
		printf("\n%d:", i);
		count1 = count_numbers(array1, size, i);
		count2 = count_numbers(array2, size, i);
		for(j = 0; j < count1+count2; j++)
			{
			printf("*");
			}
		}
	}
