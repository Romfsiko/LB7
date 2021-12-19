#include <stdio.h>

//task2
void writeArray(int* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//task3 
void readArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

//task4 Сортировка пузырьком
void sort(int* arr, int n)
{

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = (n - 1); j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
