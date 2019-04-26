#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */

	int a[10]={8,1,2,9,0,7,5,6,3,4};

	int i,j;

	printf("source arr : ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");

	int len = 10;

	int temp;

	#if 1
	for(i=0;i<=len-1;i++)
	{
		for(j=0;j<=len-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		printf("%d times : ",i+1);
		int k;
		for(k=0;k<=9;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n\n");
	}
	#else

	for(i=0;i<len-1;i++)
	{
		for(j=0;j<=len-1-i;j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

		}
		printf("%d times : ",i);
		int k;
		for(k=0;k<=9;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
	#endif
	printf("\n\n\nsort arr : ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
