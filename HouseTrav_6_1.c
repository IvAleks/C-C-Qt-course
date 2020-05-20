/* Написать “цикл” выводящий от 1 до 100 в консоль,
 используя goto.
*/
 
#include <stdio.h> 
int main()
{
	int i=0;
label:
	i++;
	if (i<=100)
	{
		printf("%d",i);
		goto label;
	}
return 0;
}

