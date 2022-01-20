#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char a[20];
	char b[20];
	char c[20];
	char d[20];
	char e[20];
	char f[20];
	char g[20];
	char h[20];
};

int main()
{
	Student classA[1000],stemp;
	int size=0;
	char temp[1000];
	gets_s(temp);
	while (scanf("%s%s%s%s%s%s%s%s",classA[size].a
						   	       ,classA[size].b
	                               ,classA[size].c
						           ,classA[size].d
								   ,classA[size].e
								   ,classA[size].f
								   ,classA[size].g
								   ,classA[size].h)!=EOF)
	{
		size++;
	}	
	printf("%s\n",temp);
	for (int i=0;i<size;i++)
	{
		printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",classA[i].a
		 	                                   ,classA[i].b
	                                           ,classA[i].c
								               ,classA[i].d
											   ,classA[i].e
											   ,classA[i].f
											   ,classA[i].g
											   ,classA[i].h);
	}	
	 
	return 0;
}
