#include <stdio.h>
int main()
{
	int w;//w--weight
	printf("weight given:");
	scanf("%d",&w);
	if(w>=1 && w<=2000)
	{
		printf("Time Estimated: 25 Minutes\n");
	}
	else if(w>=2001 && w<=4000)
	{
		printf("Time Estimated: 35 Minutes\n");
	}
	else if(w>=4000 && w<=7000)
	{
		printf("Time Estimated: 45 Minutes\n");
	} 
	else if(w>7000)
	{
		printf("maximum capacity reached\n");
	}
	else
	{
		printf("INVALID INPUT\n");
	}
	return 0;
}
