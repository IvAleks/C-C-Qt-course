/* Реализовать программу, вычитывающую текст из файла(до 100000 символов) и считающую  размер считанных данных.
*/
 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int   qwe=1000;        //количество символов
	char  str,  *s[qwe];	
	char  sfind[1]={}, ns, minc[]="a",maxc[]="z";    
	srand(time(NULL));  
	FILE*fp;
	fp = fopen("test_6.2", "w"); 
	for (int i=0;i<qwe;i++)
	{
		ns = rand() % ( *maxc- *minc + 1) +  *minc;
		s[i]=&ns;
		fprintf(fp, "%c",*s[i]);
	}
	fclose(fp);
	int i=0, size=0;
	fp = fopen("test_6.2", "r"); 
 	while(!feof(fp)) // НЕПОНЯТНО почему дублируется последний символ??????
 	{ 
		fscanf(fp,"%c",&str);	
	//printf("%c",str);
		i++	;
	}
	fclose(fp);
	i=i-1;
	//printf("символов %d", i);
	char *buf[i];
	fp = fopen("test_6.2", "r"); 
	for (int k=0;k<i;k++)
	{
    	fscanf(fp,"%c",&str);
			buf[k]=str;				
			//printf("%c",buf[k]);
			//printf("символов %d", k);
	}
	fclose(fp);
	size=sizeof(buf); // У меня разрядность 64. НЕ СОВСЕМ ПОНЯТЕН ВОПРОС ЗАДАЧИ?????
	printf(" размер = %d байт",size);
return 0;
}

