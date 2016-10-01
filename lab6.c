//Joshua Green
//Lab6-No Lab code Given

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateNumber();
void displayMenu();
int errorCheck(int);
int checkGuess(int, int);
void printResult(int, int);

int main(void){
	srand(time(NULL));
	int answer;
	answer = generateNumber();
	displayMenu();
	int guess;
	scanf("%d", &guess);
	errorCheck(guess);
		while (errorCheck(guess) == 1 ){
		printf("Invalid guess, enter your choice again. \n");
		scanf("%d", &guess);
		}
	int result;
	result = guess;
	printResult(result, answer); 
	
}

int generateNumber(){
	int answer;
	answer = rand()%2;
	return answer;
}

void displayMenu(){
	printf("Please, take a guess. \n");
	printf("0 : Head \n");
	printf("1 : Tail \n");
	printf("Enter your guess. \n");

}

int errorCheck(int guess){
	if (guess  == 0 || guess == 1)
		return 0;
	else
		return 1;
}

int checkGuess(int guess, int answer){
	if (guess = answer)
		return 1;
	else (guess > 1 || guess < 0);
		return 0;
}

void printResult(int result, int answer){
	if (result == 0 &&  answer == 0){	
	printf("Your choice was head and it was incorrect. \n");
	}	
	if (result == 0 && answer == 1){
	printf("Your choice was head and it was correct. \n");
	}
	if (result == 1 && answer == 0){
	printf("Your choice was tails and it was incorrect. \n");
	}
	if (result == 1 && answer == 1){
	printf("Your choice was tails and it wsa correct. \n");
	}
}

	
