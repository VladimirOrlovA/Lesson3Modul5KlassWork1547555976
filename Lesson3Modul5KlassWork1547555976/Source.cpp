#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson3Modul5KlassWork1547555976

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1 - 16\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 4;
	int arr[ind] = { 0 }, n, i;

	printf("\n Введите число => ");  // проверка на 11
	scanf_s("%d", &n);

	for (i = 1; i <= ind; i++)
	{
		arr[ind-i] = n - (n / 2)*2;
		n = n / 2;				
	}

	for (i = 0; i < ind; i++) printf("%d ", arr[i]);

}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2 - 15\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, sum=0, sum1=0, aversum;
	float proc;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 25;

		sum = sum + arr[i];
	}

	aversum = sum / ind;

	for (i = 0; i < ind; i++)
	{
		if (arr[i] > aversum) sum1 = sum1 + arr[i];
	}

	proc = (float) sum1 / sum;

	printf("\n процентное содержание элементов, превышающих среднеарифметическое всех элементов массива = %.2f %%", proc);


}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3 - 14\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 12;
	int arr[ind], arr1[ind], i;

	for (i = 0; i < ind; i++)
	{
		arr[i] = 0 + rand() % 9;
		arr1[i] = 0 + rand() % 9;

		printf("A[%2d] = %2d \t\t A[%2d] = %2d \n", i, arr[i], i, arr1[i]);
	}

	printf("\n\n Зменить нулями те элементы первого массива, которые есть во втором \n\n");

	for (i = 0; i < ind; i++)
	{
		if (arr1[i] == 0) arr[i] = arr1[i];
		
		printf("A[%2d] = %2d \t\t A[%2d] = %2d \n", i, arr[i], i, arr1[i]);
	}




}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4 - 13\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 15;
	int arr[ind], i, j, c, count=0;

	for (i = 0; i < ind; i++)
	{
		arr[i] = -5 + rand() % 14;

		printf("A[%2d] = %2d \n", i, arr[i]);

	}

	printf("\n первая сортировка \n");

	for (i = 0; i < ind - 1; i++)
		for (j = ind - 2; j >= i; j--)
			if (arr[j] > arr[j + 1])
			{
				c = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}

	for (i = 0; i < ind; i++) printf("A[%2d] = %2d \n", i, arr[i]);
	
	
	printf("\n выясняем до какого элемента идут отриц числа \n");

	
	for (i = 0; i < ind; i++)
	{
		if (arr[i] < 0) count++;
	}
		
	printf("\n\n");

	

	for (i = 0; i < count - 1; i++)
		for (j = count - 2; j >= i; j--)
			if (arr[j] < arr[j + 1])
			{
				c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}

	for (i = 0; i < ind; i++) printf("A[%2d] = %2d \n", i, arr[i]);

	
	printf("\n выясняем c какого элемента идут положительные числа \n");

		
	printf("\n\n");



	for (i = count; i < ind - 1; i++)
		for (j = ind - 2; j >= i; j--)
			if (arr[j] < arr[j + 1])
			{
				c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}

	for (i = 0; i < ind; i++) printf("A[%2d] = %2d \n", i, arr[i]);

}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5 - 12\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int ind = 10;
	int arr[ind], arr1[ind], i, c = 0;

	for (i = 0; i < ind; i++) 
	{
		arr[i] = -5 + rand() % 10;

		printf("A[%2d] = %2d \n", i, arr[i]);
		
	}
	
	printf("\n Сформировать новый, расположив сначала все отрицательные элементы и нули, \n после чего  - положительные, сохраняя порядок их следования.\n");
	
	for (i = 0; i < ind; i++)
	{
		if (arr[i] <= 0) arr1[c++] = arr[i];
	}

	for (i = 0; i < ind; i++)
	{
		if (arr[i] > 0) arr1[c++] = arr[i];
	}

	

	for (i = 0; i < ind; i++) printf("A[%2d] = %2d \n", i, arr1[i]);

}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6 - 11\n\n");
	SetConsoleTextAttribute(hConsole, 7);


}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task11()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task12()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}