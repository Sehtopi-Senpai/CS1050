//Joshua Green
//Homework 3


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void display_menu();
int check_option(int);
int check_size(int);
void initialize_2Darray(int x[][MAX], int size);
void print_2Darray(int x[][MAX], int size);
void initialize_1Darray(int y[], int size);
void print_1Darray(int y[], int size);
int search_max(int x[][MAX], int r, int c, int size);
int count_diagonal(int x[][MAX], int i, int size);
int closest_row(int x[][MAX], int y[], int size);
void sort_1Darray(int y[], int size);
void sort_2Darray(int x[][MAX], int size);

main(){
	
	srand(time(NULL));
	int size;
	int option;
	printf("Enter the size \n");
	scanf("%d", &size);
	int x[MAX][MAX];
	display_menu();
	scanf("%d", &option);
	check_option(option);
	while (check_option(option) == 0)
		{	
		printf("Invalid input, please enter your choice again. \n");
		scanf("%d", &option);
		}
	print_2Darray(x,size);
	if (option == 1)
		{
		int r, c;
		search_max(x, r, c, size);
		}
	}

void display_menu()
	{
	printf("Array operations, your options are: \n");
	printf("1: Search Max \n");
	printf("2: Count Diagonal Number \n");
	printf("3: Closest Row \n");
	printf("4: Sort 1D Array \n");
	printf("5: Sort 2D Array \n");
	printf("6: Exit \n");
	}

int check_option(int option)
	{
	if (option > 6 || option < 1)
		return 1;
	else
		return 0;
	}

int check_size(int size)
	{
	if (size > 100 || size < 1)
		return 0;
	else
		return 1;
	}

void initialize_2Darray(int x[][MAX], int size)
	{
	int row, col;
		for (row=0;row<size;row++)
			{
			for(col=0; col<size;col++)
				{
				x[row][col] = rand()%10;
				}
			}
	}

void print_2Darray(int x[][MAX], int size)
	{
        int row, col;
		for (row=0;row<size;row++)
			{		
			for(col = 0; col<size;col++)
			printf("%d ", x[row][col]);
			}
		printf(" \n");
			
	}

void initialize_1Darray(int y[], int size)
	{
	y[size];
	int i = 0;
		for (i = 0; i<size;i++)
		{
		y[size]=rand()%10;
		}
	}

void print_1Darray(int y[], int size)
	{
	printf("%d ", y[size]);
	}

int search_max(int x[][MAX], int r, int c, int size)
	{
	}

