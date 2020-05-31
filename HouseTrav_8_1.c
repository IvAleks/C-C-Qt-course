/* Реализовать программу сравнивающую время работы сортировки разных алгоритмов (минимум трех на выбор). Для сравнивания алгоритмам подается одинаковый набор данных - массив int arr[100000] – заполненный случайными числами
*/

#include <stdio.h> 
#include <string.h>
#include <time.h>
#define ARR_SIZE 100000

void sort_bubble(int size, int a[size]){
	for(int i = 0 ; i < (size - 1); i++) { 
		for(int j = 0 ; j < (size - i - 1) ; j++) {  
			if(a[j] > a[j+1]) {
				int tmp = a[j];
				a[j] = a[j+1] ;
				a[j+1] = tmp; 
			}
		}
	//	for (int i=0;i<size;i++)
	//		printf("i[%d]=%d ;",i,a[i]);
	//		printf("\n");
	}	 
}
void sort_min(int size, int a[size] ){
	long i, j, k; 
	int x[ARR_SIZE];
	for( i=0; i < size; i++) {   	
		k=i;
		x[i]=a[i];
		for( j=i+1; j < size; j++)	
			if (a[j] < x[i] ){
				k=j;
				x[i]=a[j];
			}
		a[k] = a[i];
		a[i] = x[i];   	
		//for (int i=0;i<size;i++)
		//	printf("i[%d]=%d ;",i,a[i]);
		//	printf("\n");
	}
	//for (int i=0;i<size;i++)
	//	printf("i[%d]=%d ;",i,a[i]);
	//	printf("\n");
}
void sort_qs(int *a, int first, int last,int size){
    if (first < last){
        int left = first,
		    right = last,
			middle = a[(left + right) / 2];
        do{
            while (a[left] < middle) left++;
            while (a[right] > middle) right--;
            
  			if (left <= right){
                int tmp = a[left];
                a[left] = a[right];
                a[right] = tmp;
                left++;
                right--;
            }

	//for (int i=0;i<size;i++)
	//	printf("i[%d]:%d ;",i,a[i]);
	//printf("\n");

        } while (left <= right);
        sort_qs(a, first, right,size);
        sort_qs(a, left, last,size);
    }

}

int main(){
	int a[ARR_SIZE],original_a[ARR_SIZE];
	srand(time(NULL));
	struct timespec start, end;
	for (int i=0;i<ARR_SIZE;i++){
		a[i]= rand()%25;
		original_a[i]=a[i];
	}
	//for (int i=0;i<ARR_SIZE;i++)
	//	printf("i[%d]=%d ;",i,a[i]);

	printf("начало сортировки, подождите это занимает время...");
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	sort_bubble(ARR_SIZE,a);
	clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	double time1=end.tv_sec-start.tv_sec + 0.000000001*(end.tv_nsec-start.tv_nsec);
	printf("\n пузырьковый метод:\n");
	printf("время сортировки: %lf sec.\n",time1);
	for (int i=0;i<ARR_SIZE;i++)
		a[i]= original_a[i];

	clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	sort_min(ARR_SIZE,a);
	clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	double time2=end.tv_sec-start.tv_sec + 0.000000001*(end.tv_nsec-start.tv_nsec);
	printf(" метод поиска минимума: \n");
 	printf("время сортировки: %lf sec.\n",time2);
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	for (int i=0;i<ARR_SIZE;i++)
		a[i]= original_a[i];
	sort_qs(a, 0, ARR_SIZE-1,ARR_SIZE);
	clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	double time3=end.tv_sec-start.tv_sec + 0.000000001*(end.tv_nsec-start.tv_nsec);
	printf(" q-метод: \n");
	printf("время сортировки: %lf sec.\n",time3);
	return 0;
}	



