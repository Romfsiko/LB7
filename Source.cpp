#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "Header.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");

	_Bool close = true;
	unsigned int n, index;
	char str1[] = "aabccabccab";
	char substr[] = "abc";
	char str2[] = "zxc";

	while (close)
	{
		printf("1. ������� 1\n");
		printf("2. ������� 2\n");
		printf("3. ������� 3\n");
		printf("4. ������� 4\n");
		printf("5. ������� 5\n");
		printf("6. ������� 6\n");
		printf("7. ����� \n");
		switch (getch())
		{
		case '1':
			system("cls");
			incrementHEapVariable();
			break;
		case '2':
			system("cls");
			printf("������� ����� ������� N = ");
			scanf_s("%d", &n);
			int* arr = (int*)malloc(n * sizeof(int));
			sortHeapArray(arr, n);
			break;
		case '3':
			system("cls");
			printf("������ - %s. ��������� - %s \n", str1, substr);
			char* newstr = delete(str1, substr);
			printf("������ ����� �������� ��������� - %s \n", newstr);
			free(newstr);
			break;
		case '4':
			system("cls");
			char* newstr1 = strcpy(str1);
			printf("������ - %s. ����� ����������� - %s \n", str1, newstr1);
			break;
		case '5':
			system("cls");
			char* newstr2 = strcat(str1, str2);
			printf("������ - %s. ������ ������ - %s. \n��������� ������������ - %s \n", str1, str2, newstr2);
			free(newstr2);
			break;
		case '6':
			system("cls");
			printf("������� ������ ��� ������� ");
			scanf_s("%d", &index);
			char* newstr3 = insert(str1, str2, index);
			printf("������ - %s. ������ ������ - %s. \n��������� ������� - %s \n", str1, str2, newstr3);
			free(newstr3);
			break;
		case '7':
			close = false;
			break;
		}

	}
}

