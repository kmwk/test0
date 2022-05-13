#include<stdio.h>


int return_result(int b, int b1)
{
	int c = b * b1;
	c++;
	c++;
	return c;
}

int main() 
{
	int a = 3;
	int a1 = 2;
	
	printf("%d", return_result(a, a1));

}

