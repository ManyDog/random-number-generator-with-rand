// random number generator with rand.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "math.h"
#include "ctime"

int main()
{
	int i;
    int diceRoll;
	srand(time(NULL));//You need this code before you use rand in order to have a true random number every time
	for (i = 0; i < 20; i++) {//you need the brackets so the for loop can be applied to rand
		/*printf_s("%d \n", rand());*/ diceRoll = (rand() % 6) + 1;
		printf_s("%d \n", diceRoll); //the %6 gives you the remainder of a number. Also because of the +1 the diceRoll is assigened to the numbers 1 to 6
	}
    return 0;
}

