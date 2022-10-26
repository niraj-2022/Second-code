#include<stdio.h>
#include<conio.h>
int main()
{
	int n,c,k,s=1;
	printf("ENTER THE NUMBER OF ROWS :");
	scanf("%d",&n);
	s=n-1;
	for(k=1;k<n;k++)
	{
		for(c=1;c<s;c++)
		printf(" ");
		s--;
		for(c=1;c<2*k-1;c++)
		{
			if(c==1||c==2*k-1)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	s=1;
	for(k=1;k<n;k++)
	{
		for(c=1;c<s;c++)
		printf(" ");
		s++;
		for(c=1;c<(2*(n-k)-1);c++)
		{
			if(c==1||c==2*(n-1))
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}
