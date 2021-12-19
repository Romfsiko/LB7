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
		printf("1. Задание 1\n");
		printf("2. Задание 2\n");
		printf("3. Задание 3\n");
		printf("4. Задание 4\n");
		printf("5. Задание 5\n");
		printf("6. Задание 6\n");
		printf("7. Выход \n");
		switch (getch())
		{
		case '1':
			system("cls");
			incrementHEapVariable();
			break;
		case '2':
			system("cls");
			printf("Введите длину массива N = ");
			scanf_s("%d", &n);
			int* arr = (int*)malloc(n * sizeof(int));
			sortHeapArray(arr, n);
			break;
		case '3':
			system("cls");
			printf("Строка - %s. Подстрока - %s \n", str1, substr);
			char* newstr = delete(str1, substr);
			printf("Строка после удаления подстроки - %s \n", newstr);
			free(newstr);
			break;
		case '4':
			system("cls");
			char* newstr1 = strcpy(str1);
			printf("Строка - %s. После копирования - %s \n", str1, newstr1);
			break;
		case '5':
			system("cls");
			char* newstr2 = strcat(str1, str2);
			printf("Строка - %s. Вторая строка - %s. \nРезультат конкатенации - %s \n", str1, str2, newstr2);
			free(newstr2);
			break;
		case '6':
			system("cls");
			printf("Введите индекс для вставки ");
			scanf_s("%d", &index);
			char* newstr3 = insert(str1, str2, index);
			printf("Строка - %s. Вторая строка - %s. \nРезультат вставки - %s \n", str1, str2, newstr3);
			free(newstr3);
			break;
		case '7':
			close = false;
			break;
		}

	}
}

