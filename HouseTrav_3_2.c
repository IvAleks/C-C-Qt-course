#include <stdio.h>  
int main()
{
printf(" Введите число от 0 до 9\n");
int num;
scanf("%d", &num); // ввод числа
int a=num;
	switch (a) {
  	case 1:
    		printf(" one \n");
		break;
	case 2:
		printf(" two \n");
		break;
	case 3:
		printf(" three \n");
		break;	
	case 4:
		printf(" four \n");
		break;	
	case 5:
		printf(" five \n");
		break;
	case 6:	
		printf(" six \n");
		break;
	case 7:
		printf(" seven \n");
		break;	
	case 8:
		printf(" eight \n");
		break;
	case 9:
		printf(" nine \n");
		break;
	case 0:
		printf(" zero \n");
		break;
	default:
		printf( "Введите число от 0 до 9  \n" );
}
return 0;
}

