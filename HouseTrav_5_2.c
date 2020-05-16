/* Реализовать программу, которая определяет частоту используемых символов. Текст должен браться из файла. Размер файла до 10000 символов
*/
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
char  str[10000],  *s[10000];
char  sfind[1], ns, minc[]="a",maxc[]="z";    

	srand(time(NULL));  
	FILE*fp;
	fp = fopen("test_5.2", "w"); 
		for (int i=0;i<10000;i++)
		{
		ns = rand() % ( *maxc- *minc + 1) +  *minc;
		s[i]=&ns;
		fprintf(fp, "%c",*s[i]);
		}
	fclose(fp);

		printf("определите символ для расчета его частоты появления\n");
		scanf("%s", sfind); 
			int kk=0;
			fp = fopen("test_5.2", "r"); 
			fscanf(fp, "%s", str);
 				for (int i=0;i<10000;i++){
					if (str[i]==*sfind)
					kk++;
				}
			printf("частота появления %d",kk);
			fclose(fp);

return 0;
}

