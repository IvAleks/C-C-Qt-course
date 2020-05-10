// Пример функции, создающей 10 текстовых файлов и заполняющая каждый из 
// них по 1000 случайных цифр
#include <stdio.h> 
#include <stdlib.h>
int main(){
char* name[]={"test1", "test2", "test3", "test4","test5",\
	      "test6", "test7", "test8", "test9", "test10"};
	for (int i=0;i<10;++i){
	FILE*fp;
	fp = fopen(name[i], "w");
	srand(10+i);
		for (int k=1; k<=1000; ++k){
		fprintf(fp, "%d",rand()%10);
		}
	fclose(fp);	
	}
return 0;
}

