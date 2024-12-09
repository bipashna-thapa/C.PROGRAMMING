#include<stdio.h>
void main()
{
	int a=3;
	int*p;
	p=&a;
	clrscr();
	printf("\n address of a=%p", &a);
	printf("\n value of a=%d", a);
	printf("\n value of p=%p", p);
	printf("\n value of a=%d", *p);
	*p=4;
	printf("\n using *p=4 value of a=%d", a);
	getch();
}