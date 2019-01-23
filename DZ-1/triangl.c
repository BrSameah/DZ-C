/*  ДЗ-4 */
/* Равносторонний треугольник с помощью циклов и символа '^' */

#include <stdio.h>

int main(int arc, char **argv){

        int i=1, par=0;

	printf("Высота траугольника: ");
	scanf("%d", &par);

        int r = par;
	while(r){
		printf(" ");
		r--;
		}		
		printf("^");

	while(i < par){

		int k = par;
		int h = 1;
		printf("\n");
		while(k > i){
			printf(" ");
			k--;
		}
		printf("^");
		while(h <= i){
			printf("^^");
			h++;
		}
	i++;
	}
	printf("\n");



return 0;
}
