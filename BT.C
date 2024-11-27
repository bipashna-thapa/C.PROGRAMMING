#include<stdio.h>
void main()
{
	int i, j, a[2][2]={{1,2},{3,4}};
	 clrscr();
	  for(i=0; i<2; i++)
	   for(j=0; j<2; j++)
	    printf("a[%d][%d]=%d", i, j, a[i][j]);
	    getch();
}