/*
 * Написать функцию, которая возвращает указатель на область памяти,
 * которую можно использовать как массив элементов типа int.
 * Количество элементов указывается в аргументе функции.
 * Массив должен быть инициализирован нулями.
 * Заполнить массив и вывести на экран.
 */

#include <stdio.h>
#include <stdlib.h>

int* rezerv(int value, int *Pos); /* Создаём массив и отдаём указатель на него */
void out(int value, int *Poi);   /* Инициализируем и выводим массив. Освобождаем память */ 

int main(int argc, char **argv){

	int num;
	int *pointer;

	printf("\nВведите число элементов массива: ");
	scanf("%d", &num);
	puts("");
	
	pointer = rezerv(num, pointer);
	out(num, pointer);	

return 0;
} 


int* rezerv(int value, int *Pos){	
	Pos = (int*)calloc(value, sizeof(int));
	return (Pos);	
}

void out(int value,int *Poi){
	puts("Инициализируем созданный массив: ");
	int i;
	for(i=0; i < value; i++){
		*(Poi+i) = i * 5;
		printf("%d ",*(Poi+i));
	}
	free(Poi);
	puts("\n");
}
