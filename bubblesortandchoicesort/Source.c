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
	int *arr;//��������� ������
	int size;//����� �������
	printf("������ ����� �������: ");
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));//�������� ���'��
	for (int i = 0; i < size; i++)
	{
		printf("������ ������� �������: ");
		scanf("%d", &arr[i]);
	}
	system("cls");
	printf("������:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n1 - ���������� �������\n2 - ����������� ����������\n");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		//���������� �������
		int min;
		int k;//������ ���������� �������� � ������
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

		printf("\n³����������� ������:\n");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[i]);
		}
		break;

	case 2:
		//����������� ����������
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

		printf("\n³����������� ������:\n");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[i]);
		}
		break;
	}
	
	
	
	system("pause");
	return 0;
}