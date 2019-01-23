/*
 * Задание %2 
 * Используя файл math.h описать функцию
 * calculateSquareEquality(int a,int b,int c,float* x1,float* x2)
 * для решения уравнения: a*x^2+b*x+c=0
 * записать результат в переменные х1 и х2
 * Если нет корней, вернуть -1, если 1 корень - то 0, если 2 корня - то 1
 * 
 * Компилятор: gcc -Wall <name.c> -o <name.exe> -lm
*/

#include <stdio.h>
#include <math.h>


int calculateSquareEquality(int a,int b,int c,float* x1,float* x2){
	
	if((a == 0) || (c == 0)){
		printf("\n!!! Важно: значения 'A' или 'С' не могут быть = 0 \n");
		return 2;
	}
	else{

	int k = 0;

	k = (b*b) - 4 * a * c;

		if(k < 0){
			printf("\nУравнение не имеет корней!\n");
			return -1;
		}
		else if(k == 0){
			*x1= -b/(2/a);
			printf("\nУравнение имеет только 1 корень: %f\n",*x1);
			return 0;
		}
		else{
			*x1 = (-b + sqrt(k))/(2 * a);
			*x2 = (-b - sqrt(k))/(2 * a);
			printf("\nУравнение имеет 2 корня: %.2f и %.2f\n",*x1,*x2);
			return 1;
		}	
	}
}		



int main(int argc, char **argv){

	int A = 0, B = 0, C = 0;
	float q1 = 0, q2 = 0;
	float *pq1, *pq2;
	pq1 = &q1;
	pq2 = &q2;

	printf("Введите целое значение для A: ");
	scanf("%d",&A);
	printf("Введите целое значение для B: ");
	scanf("%d",&B);
	printf("Введите целое значение для С: ");
	scanf("%d", &C);
	
	calculateSquareEquality(A, B, C, pq1, pq2);


return 0;
}
