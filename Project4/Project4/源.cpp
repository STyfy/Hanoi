#include<stdio.h>

int main()
{
	void  hanoi(int n, char x, char y, char z);
	int i;

	printf("input the number of diskes:");
	scanf_s("%d", &i);
	printf("The step to move %d diskes:\n",i);
	hanoi(i, 'A', 'B', 'C');

	return 0;
}

void  hanoi(int n, char x, char y, char z)
{
	void move(char m, char n);

	if (n == 1)
		move(x, z);

	else
	{
		hanoi(n - 1, x, z, y);
		move(x, z);
		hanoi(n - 1, y, x, z);
	}
}


void  move(char  m, char  n)
{
	printf("%c->%c\n", m, n);
}
