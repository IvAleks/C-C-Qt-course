// Пример функциb, создающtq 10 текстовых файлов и заполняющая каждый из 
// них по 1000 случайных цифр
#include <stdio.h> 
 
int main()
{   
FILE *fp;
if ((fp = fopen("test", "w"))==NULL)
{
	printf("Cannot open file.\n");
	exit(1);
}


/*
int number, summ=0;
printf(" Введите дату рождения без разделительных символов\n");
scanf("%d", &number); // ввод
	int func(int num)
	{
	if (num<10) return num;
	else return num%10+func(num/10);
    }
summ=func(number);
printf("сумма чисел = %d \n", summ);
*/
return 0;
}

