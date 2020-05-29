/* Программа должна хранить связку «имя - телефон» с помощью структуры. Программа должна работать в двух режимах:
1. Добавление новых записей с консоли. Хранение записей в файле. 
2. Выводить все записи справочника.
*/

#include <stdio.h> 
#include <string.h>

int    num_var;
int    str=0;
char   num[20], nam[20];
struct myStr{
	char *name;
	char *number;
}; 
struct myStr initName(struct myStr Name_num){
	printf("Введите имя пользователя   ");
	scanf("%s",nam);
	Name_num.name=nam;
	printf("Введите номер телефона     ");
	scanf("%s",num);
	Name_num.number=num;
	return (Name_num);
}
void menu(){
	printf("1 - добавить абонента в справочник\n");
	printf("2 - вывести информацию из справочника\n");
	printf("3 - выход\n");
	printf(">");
}
int var_menu(){
	printf("Выберите пункт меню 1 - 3:\n");
	scanf("%d",&num_var);
	return (num_var);
}
int main(int argc, char *argv[]){ 
	system("clear");
	struct myStr Name_num[1];
	do{
		menu(); 
		num_var=var_menu();
		switch(num_var){
			case 1:
				Name_num[1]=initName (Name_num[1]);
				printf("Создана запись: %s  -  %s \n", Name_num[1].name, Name_num[1].number);			
				FILE *fp;
				fp=fopen("phonebook.txt", "a+");
				fprintf(fp, "%s   -   %s \n", Name_num[1].name, Name_num[1].number);
				fclose(fp);
				str++;
				break;
			case 2:
				if(str>0){
					//system("clear");
					FILE *fp;
					fp = fopen("phonebook.txt", "r"); 
					printf("В телефонном справочнике имеются следующие записи:\n"); 
						while(!feof(fp)){ 
							fscanf(fp,"%c",&str);	
							printf("%c",str);
						}
					fclose(fp);

           			}
				break;
		}
	}        
	while ( num_var!= 3);
	return 0;
}

