#include<stdio.h>

int perimeter(int a, int b)
{
        return 2*(a+b);
}
int area(int a, int b)
{
        return a*b;
}

void main()
{
	int c = perimeter(20, 10);
	int d = area(20, 10);
	printf("chu vi la %d\n", c);
	printf("dien tich la %d\n", d);
	if (c == d)
	{
		printf("dat hinh vuong");
		printf("dat vuong");
	}
	else if (c > d)
		printf("chu vi lon hon dien tich");
	else 
		printf("chu vi nho hon dien tich"); 
}
