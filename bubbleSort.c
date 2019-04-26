/****************************************************************************************************************
*  冒泡排序算法的原理如下：
*	比较相邻的元素。如果第一个比第二个大，就交换他们两个。
*	对每一对相邻元素做同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
*	针对所有的元素重复以上的步骤，除了最后一个。
*	持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*  精髓：
*	就是2个for，第一个for有多少个元素就循环几次，第二个for记录已经排好了几个
*****************************************************************************************************************/
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


#if 0 
//这里做一个输出的显示
source arr : 8 1 2 9 0 7 5 6 3 4 

1 times : 1 2 8 0 7 5 6 3 4 9 

2 times : 1 2 0 7 5 6 3 4 8 9 

3 times : 1 0 2 5 6 3 4 7 8 9 

4 times : 0 1 2 5 3 4 6 7 8 9 

5 times : 0 1 2 3 4 5 6 7 8 9 

6 times : 0 1 2 3 4 5 6 7 8 9 

7 times : 0 1 2 3 4 5 6 7 8 9 

8 times : 0 1 2 3 4 5 6 7 8 9 

9 times : 0 1 2 3 4 5 6 7 8 9 

10 times : 0 1 2 3 4 5 6 7 8 9 


sort arr : 0 1 2 3 4 5 6 7 8 9 

#endif
