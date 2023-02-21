#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    printf("Введите количество элементов :");
    scanf("%i",&n);
 
    int *arr = new int[n];
 
    for (int i = 0; i < n; i++)
    {
    	printf("Введите элемент [ %i ] = ",i+1);
        scanf("%i",&arr[i]);
    }
 
    int min = arr[0];
    int max = arr[0];
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum += arr[i];
    }
 
 	printf("Максимальное число = %i\n",max);
 	printf("Минимальное число = %i\n",min);
 	printf("Сумма всех элементов = %i\n",sum);
 	printf("Среднее арифметическое элементов = %f\n",(float)sum/(float)n);
 
    delete[] arr;
}
