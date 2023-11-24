#include <stdio.h>

void main() {

	//типізація, масив, для циклів і допоміжні зміні для пошуку номера рядку і суми рядку
	int i = 0, j = 0, height_width, sum_of_string = 0, number_of_string = 0, numerosity_of_min_number = 1;
	float array[10][10];

	// введення розміру масиву (висота і ширина)
	printf("enter height-width of array, a positive integer is more than 0 and less than 11: ");
	scanf_s("%d", &height_width);


	//перевірка чи коректні значення (вихід за масив)
	if (0 < height_width && height_width < 11)
	{
		//ведення елементів масиву
		for (i = 0; i < height_width; i++)
		{
			for (j = 0; j < height_width; j++)
			{
				printf("Element %d %d: ", (i + 1), (j + 1));
				scanf_s("%f", &array[i][j]);
			}

		}

		//типізація найменше значення масиву
		int min_number_of_array = array[0][0];

		//пошук рядка з мінімальним значенням
		for (i = 0; i < height_width; i++)
		{

			for (j = 0; j < height_width; j++)
			{
				//якщо у рядку знайдено елемент елемент менший за найманще значення
				if (array[i][j] < min_number_of_array)
				{
					//надати домопіжній зміній нове значення і запамятати номер рядка
					min_number_of_array = array[i][j];
					number_of_string = i;
					numerosity_of_min_number = 1;

				}

				//якщо знайдено елемент рівний мінімальному значені в іншому рядку
				else if (array[i][j] == min_number_of_array && number_of_string != i)
				{
					numerosity_of_min_number++;
				}

			}

		}

		//перевірити чи один мінімальний елемент на різні рядки
		if (numerosity_of_min_number > 1) 
		{
			printf("False, 2 or more min number with the same value: %d", min_number_of_array);
		}

		//один мінімальний елемент
		else 
		{

			//знаходження суми для цього рядка
			for (i = 0; i < height_width; i++)
			{
				sum_of_string += array[number_of_string][i];
			}

			//вивід результату
			printf("sum of %d string:%d", (number_of_string + 1), sum_of_string);

		}

	}

	//порушення умови, вихід за масив
	else
	{
		//вивести помилка 
		printf("False, more than 10 or less then 0");
	}
	

	//повернення 0
	return 0;

}