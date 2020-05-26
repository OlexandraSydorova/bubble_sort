#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <Windows.h>
#include <malloc.h>

int main()
{
	system("chcp 1251");
	system("cls");
	int *arr;//динамічний массив
	int size;//розмір массиву
	printf("Введіть розмір массиву: ");
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));//виділення пам'яті
	for (int i = 0; i < size; i++)
	{
		printf("Введіть елемент массиву: ");
		scanf("%d", &arr[i]);
	}
	system("cls");
	printf("Массив:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n1 - сортування вибором\n2 - бульбашкове сортування\n");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		//сортування вибором
		int min;
		int k;//індекс мінімального елементу в массиві
		for (int i = 0; i < size; i++)
		{
			min = arr[i];
			for (int j = i; j < size; j++)
			{
				if (min >= arr[j])
				{
					min = arr[j];
					k = j;
				}
			}
			arr[k] = arr[i];
			arr[i] = min;
		}

		printf("\nВідсортований массив:\n");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[i]);
		}
		break;

	case 2:
		//бульбашкове сортування
		int tmp;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size-1; j++)
			{
				tmp = arr[j];
				if (arr[j] > arr[j + 1])
				{
					arr[j] = arr[j+1];
					arr[j + 1] = tmp;
				}
			}
		}

		printf("\nВідсортований массив:\n");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[i]);
		}
		break;
	}
	
	
	
	system("pause");
	return 0;
}