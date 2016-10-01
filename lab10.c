//cs 1050 lab 10
//Joshua Green
//4-24-2014


#include<stdio.h>
#include<string.h>
int string_length(char*);
void copy_string(char*, char*);
void merge_string(char*,char*,char*);
int prefix(char*,char*);

main(int argc, char*argv[])
{
char copy[100];
char merge[100];
		if(argc!=3)
		{	
			printf("Not enough parameters. \n");
			return 0;
		}
char*input1=argv[1];
char*input2=argv[2];
int i = string_length(input1);
int j = string_length(input2);
printf("Length of the first string %s is %d. \n", input1, i);
printf("Length of the second string %s is %d. \n", input2, j);
copy_string(input1, copy);
printf("The copied string is %s \n", copy);
merge_string(input1, input2, merge);
printf("The merged string is %s \n", merge);
}



int string_length(char*input)
{
int i;
for (i=0;*(input+i) !='\0';i++);
return i;
}

void copy_string(char*input, char*array)
{
int i;
for(i=0;*(input+i)!='\0';i++)
	{
	*(array+i) = *(input+i);
	}
}

void merge_string(char*input, char*input2, char*narray)
{
int i;
for(i=0;*(input+i)!='\0';i++)
	{
	*(narray+i) = *(input+i); 
	}
int j;
for(j=0;*(input2+j)!='\0';j++)
	{
	*(narray+i+j) = *(input2+j);
	}
}

