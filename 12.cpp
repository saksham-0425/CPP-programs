// Sum of Prime Number in an array using DMA

#include<stdio.h>
#include<stdlib.h>

int PrimeCount(int *arr, int n)
{
	int prime_cnt = 0;
	int flag;

	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			prime_cnt = prime_cnt + arr[i];
		}
	}
	return prime_cnt;
}

int main()
{
	int *arr;
	int n;
	printf("n: ");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));

	for (int i = 0; i < n; i++)
	{
		printf(">> ");
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d",arr[i]);
	}
	
	printf("\n");
	printf("Sum of prime are: %d",PrimeCount(arr,n));
}