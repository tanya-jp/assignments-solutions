#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, y = 0, c = 0;
	while(1)
	{
		printf("What's your choice?(1: Stone, 2: Paper, 3: Scissors) ");
		scanf("%d", &a);
		b = (rand() % 3) + 1;
		switch(b)
		{
			case(1):
				printf("COM's choice is: Stones\n");
				break;
			case(2):
				printf("COM's choice is: Paper\n");
				break;
			case(3):
				printf("COM's choice is: Scissors\n");
		}
		if(a == b)
		{
			printf("Draw!\n");
			y++;
			c++;
		}
		if(a == b + 1 || a == b - 2)
		{
			printf("A point for you!\n");
			y++;
		}
		if(b == a + 1 || b == a - 2)
		{
			printf("A point for COM!\n");
			c++;
		}
		printf("Your score: %d\nCOM: %d\n\n", y, c);
		if(y >= 5 && y - c >= 2)
		{
			printf("You won!");
			break;
		}
		if(c >= 5 && c - y >= 2)
		{
			printf("Sorry. You lost :(");
			break;
		}
	}
	while(1);
}

