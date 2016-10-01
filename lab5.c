//Joshua Green
//lab 5 - no lab code given

#include<stdio.h>
#include<math.h>

int check_number(float);
int check_exponent(int);
float compute_power(float x, int n);
//float x;
//int n;  ignore this stuff, I was scared to take it out


int main(){
float x;
int n;
	printf("Enter a number. \n");
	scanf("%f", &x);
		while(check_number(x)==0){
		printf("The number should be between 0 & 100, enter the number again. \n");
		scanf("%f", &x);
		}

	printf("Enter the exponent. \n");
	scanf("%d", &n);
		while(check_exponent(n)==0){
		printf("Exponent should be between -5 and 5, enter the exponent again. \n");
		scanf("%d", &n);
		}
 	
	float total;
	float total2;	
	total = compute_power(x,n);
	printf("pow(%f, %d)=%f using compute_power function \n", x, n, total);
	total2 = pow(x, n);
	printf("pow(%f, %d)=%f using pow function from the library. \n", x, n, total2);
	
}

int check_number(float x)
{
	if(x<0 || x>100)
		return 0;
	else
		return 1;
}

int check_exponent(int x)
{
	if(x <= -5 || x >= 5)
		return 0;
	else
		return 1;
}

float compute_power(float x, int n)
{
	float total = 1;
	int i;
	if (n >= 0){
		for(i=0; i<n; i++)
		total = total * x;
		return total;
		}
	else
	{
		n = n * -1;
		for(i=0; i<n; i++)
		total = total * x;
		return 1/total;
		}
		
}
	
