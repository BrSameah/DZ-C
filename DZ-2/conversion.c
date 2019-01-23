/* 
 * Задание № 3 
 * Описать функцию, которая принимает массив типа int,
 * а выводит масcивом типа short.
 */

#include <stdio.h> 
#include <stdlib.h>

void conver(int *mas);
void conv2(int *mas);

int main(int argc, char **argv){

	int array[5], i;
	
	puts("Массив целых чисел:\n");
	for(i=0; i<5; i++){
		printf("Int: %d, ",*(array+i) =rand());      
	}
		
	puts("\n\nТот же массив, приведённый к 'short':");
	conver(array);	
        puts("\nТот же массив, в 16-ричном формате:");
	conv2(array);	

	
return 0;
}

void conver(int *mas){

	short j = 0;
	while( j < 5){
		printf("Short: %d\n",  (short)*(mas+j++));
	}

}

void conv2(int *mas){
	short q = 0;
	while(q < 5){
		printf("16-ричный формат: %x\n",*(mas+q++));
	}
}
