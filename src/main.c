#include <stdio.h>

int main()
{
	int a ,b;
	printf("Enter a , b = ");
	scanf("%d , %d" , &a , &b);
	int c = a + b;
	printf("sum is = %d" , c);
    int d = a - b;
	printf("sub is = %d" , d);
	return (0);
}