#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function to generate and return a random lowercase letter
char randchar()
{
	//pick a random number between 1 and 25
	int random_number = rand() % 26;
	//convert the number into a letter
	char letter = 'a' + random_number;
	//return the generated letter
	return letter;
}

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

