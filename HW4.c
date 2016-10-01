//Joshua Green
//HW-4

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

typedef struct 
{
	int id;
	int grade;
} data;

data student[MAX];

int load_data(char* filename);
void print_data(int size);
int update_data(char* filename, int n);
int highest_grade(int size);
int lowest_grade(int size);
float average_grade(int size);
int write_content(char* fname, int size, int low, int high, float avg);

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Insufficient arguments. \n");
		return 1;
	}
	
	if (load_data(argv[1]) == 0)
	{
		printf("Unable to open the input file. \n");
		return 1;
	}
	int size = load_data(argv[1]);
//	printf("size = %d", size);
//	printf("student 0 ID is = %d", student[0].id);
	print_data(size);
	int high = highest_grade(size);
	int low = lowest_grade(size);
	printf("The student with the highest grade has the id %d with the grade %d. \n", student[high].id, student[high].grade);
	printf("The student with the lowest grade has the id %d with the grade %d.\n", student[low].id, student[low].grade);
	printf("The average grade for the class is %.2f \n", average_grade(size));
	size = update_data(argv[2], size);
	print_data(size);
	high = highest_grade(size);
	low = lowest_grade(size);
	printf("The student with the highest grade has the id %d with the grade %d. \n", student[high].id, student[high].grade);
	printf("The student with the lowest grade has the id %d, with the grade %d. \n", student[low].id, student[low].grade);
	printf("The average grade for the class is %.2f \n", average_grade(size));
	write_content(argv[3], size, low, high, average_grade(size));
	return 1;
}



int load_data(char* filename)
{
	int i = 0;
	FILE* file=fopen(filename, "r");
	if(file == NULL)
	{
		return 0;
	}

	int size;

	fscanf(file, "%d", &size);

	for(i = 0; i<size; i++)
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
	for(i=0; i<size; i++)
	{
		printf(" %d %d \n", student[i].id, student[i].grade);
	}
}

int update_data(char* filename, int n)
{
	FILE* file=fopen(filename, "r");
	if(file == NULL)
	{
		return 0;
	}
	int size;
	fscanf(file, "%d", &size);
	size = size + n;
	for(n; n < size; n++)
	{
		fscanf(file, "%d", &student[n].id);
		fscanf(file, "%d", &student[n].grade);
	}
	return size;
}

int highest_grade(int size)
{
	int bigIdx = 0;
	int i;
	for(i = 1; i<size; i++)
	{
		if(student[bigIdx].grade < student[i].grade)
		{
			bigIdx = i;
		}
	}
	return bigIdx;
}

int lowest_grade(int size)
{
	int smIdx = 0;
	int i;
	for(i = 1; i<size; i++)
	{
		if(student[smIdx].grade > student[i].grade)
		{
			smIdx = i;
		}
	}
	return smIdx;
}

float average_grade(int size)
{
	int sum = 0;
	int i;
	for(i = 0; i < size; i++)
	{
		sum += student[i].grade; 
	}
	
	return sum/size;
}

int write_content(char* fname, int size, int low, int high, float avg)
{
	FILE* output = fopen(fname, "w");
	int i = 0;
	for(i = 0; i < size; i++)
	{
		fprintf(output, "%d %d\n", student[i].id, student[i].grade);
		
	}	
	fprintf(output, "The student with the highest grade has the id %d and the grade %d \n", student[high].id, student[high].grade);
	fprintf(output, "The student with the lowest grade has the id %d and the grade %d \n", student[low].id, student[low].grade);
	fprintf(output, "The average class grade is %.2f.\n", avg); 
	

}
