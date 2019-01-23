/*
 * Задание №1
 * Инициализировать массив целых чисел, описать функцию принимающую 
 * на вход этот массив. Функция вернёт 0, если в массиве нет нечетных чисел,
 * если нет, то все числа нужно удвоить и функция вернёт 1.
 * После выполнения функции, если массив был изменён, то выводятся все числа на экран.
 */

#include <stdio.h>
#include <stdlib.h>

int resivearray(int *ax){
	
	for(int i=0; i<5; i++){
		if(*(ax+i) % 2 == 0){	
			continue;
		}
		else{ 
			return 1;
		}
	
	}
return 0;
}

void inout(int *mas){
	puts("\n Массив целых чисел: \n");
	for(int i = 0; i < 5; i++){
		printf("Введите целое число: ");
		scanf("%d",(mas+i));
	}	
}

void out(int j, int *arr){

	if(j == 1) {
		int i = 0;
		puts("\nВыводим массив умноженый на 2 (есть нечётное число)\n");
			while(i < 5){
				printf("Элемент № %d, значение: %d\n",i,(*(arr+i++)*2)); 
			}
	}
	else{
		printf("\nВсе числа чётные! \n");
	}
}

int main(int argc, char **argv){

	int arr[5];
	
	inout(arr);

	int j = resivearray(arr);
		printf("\nФункция вернула: %d \n",j);  

	out(j,arr);

		
return 0;
}
