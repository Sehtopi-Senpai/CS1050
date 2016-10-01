//Joshua Green
//CS 1060 Lab-11
//5-1-2014

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct{
	int id;
	int grade;
} data;

data student[MAX];

int load_data(char* filename);
void print_data(int size);
int update_grade(int size, int id, int ngrade);
int highest_grade(int size);
int write_content(char* fname, int size);

int main(int argc, char *argv[])
{
	if (argc!=3)
	{
		printf("Insufficient arguments. \n");
	}
	int size = load_data(argv[1]);
	if (load_data(argv[1]) == 0)
	{
		printf("Unable to open the input file. \n");
		return 1;
	}
	print_data(size);

	int sid;
	int ngrade;
	printf("Enter the ID of the student to search. \n");
	scanf("%d", &sid);
	printf("Enter the grade for the student. \n");
	scanf("%d", &ngrade);
	update_grade(size, sid, ngrade); 
	print_data(size);
	int highest = highest_grade(size);
	printf("The highest grade is %d of student ID %d\n",student[highest].grade, student[highest].id);
	
	write_content(argv[2], size);
	return 0;	
}

int load_data(char* filename)
{
	int i = 0;
	FILE* file=fopen(filename, "r");
	if(file==NULL)
	{
		return 0;
	}

	int size;

	fscanf(file, "%d", &size);

	for(i=0;i<size;i++)
	{
		fscanf(file, "%d", &student[i].id);
		fscanf(file, "%d", &student[i].grade);
	}
	fclose(file);	
	return size;

}

void print_data(int size)
{
	int i = 0;
	printf("ID  Grade \n");
	for(i=0;i<size;i++)
	{
		printf("%d %d \n", student[i].id, student[i].grade);
	}
}

int update_grade(int size, int id, int ngrade)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		if(student[i].id == id)
		{
			student[i].grade = ngrade;
		}
	}

	return 0;
}

int highest_grade(int size)
{
	int big;
	int bigIdx;
	int i;
	for( i = 0; i<size;i++)
	{
		if(big < student[i].grade)
		{
			big = student[i].grade;
			bigIdx = i;
		}
	}
	return bigIdx;
}

int write_content(char* fname, int size)
{
	int i = 0;
	FILE* output=fopen(fname, "w");
	for(i=0;i<size;i++)
	{
		fprintf(output, "%d %d \n", student[i].id, student[i].grade);
	}
}	
