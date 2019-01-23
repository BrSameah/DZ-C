/*
 * Описать структуру "Прямоугольник", содержащую целые значения
 * длинны, ширины, периметра и площади прямоугольника.
 * Написать функцию, принимающую на вход указатель на структуру,
 * подсчитывающую и записывающую площадь и периметр прямоугольника
 * в структуру.
 */
  
#include <stdio.h>

struct forma {
	int length;
	int width;
	int perimetr;
	int area;
} new, *Pnew;

void get_data(struct forma *Pn){
	printf("Введите длину стороны прямоугольника: ");
	scanf("%d",&Pn->length);
	printf("Ведите ширину стороны прямоугольника: ");
	scanf("%d",&Pn->width);
	Pn->perimetr = (Pn->length * 2) + (Pn->width * 2);
	Pn->area = (Pn->length) * (Pn->width);
}

void put_data(struct forma *Pn){
	printf("\nДлина стороны: %d\nШирина строны: %d\nПериметр: %d\nПлощадь: %d\n",Pn->length,Pn->width,Pn->perimetr,Pn->area);
}

int main(int argc, char **argv){

	Pnew = &new;
	get_data(Pnew);
	put_data(Pnew);


return 0;
}
