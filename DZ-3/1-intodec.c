/* 
 * Описать функцию, возвращающую строку с двоичным представлением десятичного числа,
 * переданного в аргументе этой функции.
 */

#include <stdio.h>
#include <stdlib.h>

void decim(int a);

int main(int argc, char **argv){

	int num = 0;
	printf("\nВведите десятичное число: ");
	if(!scanf("%i",&num)){
		printf("Неизвестный символ!\n");
		return 1;
	}
	
	decim(num);


return 0;
}

void decim(int a){

	char c[20];
	int k = 0;
	while(a > 1){ /* Перевод в двоичную систему */
		c[k++] = (a % 2)+'0';
		a /= 2;	
	}     			     		
	c[k++] = a + '0';		
	c[k] = '\0';

	char tmp;
	for(int i=0;i<k/2; i++){  /* "Переворачиваем" число */
		tmp = c[i];
		c[i] = c[k - 1 - i];
		c[k-1-i] = tmp;
	}
	
	printf("В двоичной системе это: ");
	for(int i=0; i<k; i++)
		printf("%c",c[i]);
	puts("\n");

}
