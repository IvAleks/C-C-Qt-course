/* Сделать программу, которая заполняет массив char размером 1000. Заполнить массив случайными символами(не цифрами) и вывести в консоль
*/
 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
char* s[1000];
char  ns, minc[]="A",maxc[]="z";    
srand(time(NULL));    
	for (int i=0;i<1000;i++){
	ns = rand() % ( *maxc- *minc + 1) +  *minc;
	s[i]=&ns;
	printf("%c", *s[i]);
	}
return 0;
}

