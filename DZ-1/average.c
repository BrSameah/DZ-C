/* ДЗ-3
*  Среднее арифметическое введёных чисел
*/

#include <stdio.h>

int main(int argc, char **argv){

	float sum=0, par=0;
	float avg;
	int j = 0;

	while(j < 10){
		printf("Введите целое число: ");
		scanf("%f", &par);
		sum += par;
		j++;
	}
	
	printf("Сумма чисел равна: %.0f\n",sum);	
	avg = (sum / 10);
	
	printf("Среднее арифметическое 10 введёных чисел равно : %.1f\n", avg);

return 0;
}
