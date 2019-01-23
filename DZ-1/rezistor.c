/* ДЗ - 1 
*   Формула расчёта резисторного делителя: Uo = Ui * (R1/(R2+R1))
*   Написать формулы расчёта для: *Ui = ? , *R1 = ? ,  *R2 = ?
*   Ui = Uo / (R1/(R2+R1))
*
*   Uo = (R2 * Ui) / (R1+R2)) // Если известны R1, R2 и Ui
*   R1 = (Ui * R2) / Uo      // Если известны R2, Uo и Ui
*   R2 = (R1*Uo) / (Ui - Uo) // Если известны R1, Uo и Ui
*/

#include <stdio.h>

int main(int argc, char **argv){
	
	float R1=0, R2=0, Ui=0, Uo=0;

	puts("\n * * Ui = Uo / (R1/(R2+R1)) * * \n"); 
	printf("Введите  значение для R1: ");	
	scanf("%f", &R1);
	printf("Введите значение для R2: ");
	scanf("%f", &R2);
	printf("Введите значение для Uo: ");
	scanf("%f", &Uo);

	printf("\nUi будет равно: %.1f \n", Uo/(R1/(R1+R2)));

	 R1=0, R2=0, Ui=0, Uo=0;

	puts("\n * * Ui = Uo / (R1/(R2+R1)) * * \n"); 
	printf("Введите  значение для R1: ");	
	scanf("%f", &R1);
	printf("Введите значение для R2: ");
	scanf("%f", &R2);
	printf("Введите значение для Uo: ");
	scanf("%f", &Uo);

	printf("\nUi будет равно: %.1f \n", Uo/(R1/(R1+R2)));

	
	puts("\n * *  R1 = (Ui * R2) / Uo * * \n"); 
	printf("Введите  значение для Uo: ");	
	scanf("%f", &Uo);
	printf("Введите значение для R2: ");
	scanf("%f", &R2);
	printf("Введите значение для Ui: ");
	scanf("%f", &Ui);

	printf("\nR1 будет равно: %.1f \n", (Ui * R2)/Uo );

	 R1=0, R2=0, Ui=0, Uo=0;

	puts("\n * *  R2 = (R1*Uo) / (Ui - Uo)* * \n"); 
	printf("Введите  значение для R1: ");	
	scanf("%f", &R1);
	printf("Введите значение для Ui: ");
	scanf("%f", &Ui);
	printf("Введите значение для Uo: ");
	scanf("%f", &Uo);

	printf("\nR2 будет равно: %.1f \n", (R1*Uo)/(Ui-Uo));


return 0;
}
