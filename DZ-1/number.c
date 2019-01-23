/* ДЗ-2 
*  Требуется запросить у пользователя любое целое число.
*  Диапазон от 0 до 100.
*/

#include <stdio.h>

int main(int argc, char **argv){

	int num=0;

	printf("\nВведите любое целое число от 0 до 100: ");
	scanf("%d",&num);

	if((num < 0) || (num > 100)){
		printf("Ваше число не подходит под указанный диапазон!\n");
	}
	else if( !num)
		printf("Введён неизвестный символ!\n");
	else
		printf("Вы ввели число %d\n",num);

return 0;
}
