
#include<stdio.h>
#include<stdlib.h>
void move(char x, char y);
void hanoi(int n, char one, char two, char three);
int main()
{
	char A = 'A', B = 'B', C = 'C';
	hanoi(3, A,B,C);
	system("pause");
	return 0;
}

void hanoi(int n, char one, char two, char three)
{
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three,two );
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}






void move(char x, char y)
{
	printf("%c-->%c\n",x,y);
}