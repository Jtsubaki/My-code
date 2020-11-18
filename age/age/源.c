#include <stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("the youngs\n");
	}
	else if (age >= 18 && age < 30)
	{
		printf("teenager\n");
	}
	else if (age >= 30 && age < 50)
	{
		printf("adault\n");
	}
	else if (age >= 50 && age < 80)
	{
		printf("the olds\n");
	}
	else
	{
		printf("old to die\n");
	}
	return 0;
}