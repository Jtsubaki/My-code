#include<stdio.h>
int main()
{
	int i, j, min, t,a[11];
	for (i = 1;i < 11;i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	printf("\n");
		printf("The numbers are:");
	for (i = 1;i < 11;i++)
		printf("%d", a[i]);
	printf("\n");
     for (i = 1;i <= 9;i++)				
	{
		min = i;						
		for (j = i + 1;j <= 10;j++)		
		{
			if (a[min] > a[j])			
				min = j;				
		}
		t=a[i];					
		a[i] = a[min];
		a[min] =t;
	}
	printf("The sorted numbers are£º\n");
   for (i = 1;i <= 10;i++)				
		printf("%d", a[i]);

	printf("\n");

	return 0;
}




