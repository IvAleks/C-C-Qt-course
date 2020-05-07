// Пример рекурсии для расчета суммы цыфр дня рождения 
#include <stdio.h>  
int main()
{   
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
return 0;
}

