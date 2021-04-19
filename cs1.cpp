#include<stdio.h>
main()
{
	int mark;
	printf("Enter the mark:");
	scanf("%d",&mark);
	if (mark>=85)
	{
		printf("Grade A");
	}
	else if (mark<84 && mark>70)
	{
		printf("Grade B");
	}
	else if (mark<69 && mark>55)
	{
		printf("Grade C");
	}
	else if (mark<54 && mark>40)
	{
		printf("Grade D");
	}
	else 
	{
		printf("Grade F");
	}
}
