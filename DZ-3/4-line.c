/*
 * Описать структуру "прямая линия", состоящую из 
 * длинны и 2 внутренних структур типа"точка". В каждой
 * структуре находятся координаты по осям "Х" и "У".
 * Описать функцию, принимающую на вход координаты 2 точек и 
 * возвращающую структуру "линия".
 */

#include <stdio.h> 
#include <math.h>

struct line{
	struct {
		int x; int y;
	} cord1;
	struct {
		int x; int y;
	} cord2;
	float lenth;
};


struct line get_data(int a, int b, int c, int d); /* Функция получает данные, возвращает их в структуре */
void put_data(struct line *po); /* Функция получает указатель на структуру, считает и выводит результат */

int main(int argc, char **argv){

	struct line massive;
	struct line *poi;
	int a, b, c, d;

	printf("\nВведите координату 'х' для первой точки: ");
	scanf("%d", &a);
	printf("Введите координату 'y' для первой точки: ");
	scanf("%d", &b);
	printf("Введите координату 'х' для второй точки: ");
	scanf("%d", &c);
	printf("Введите координату 'у' для второй точки: ");
	scanf("%d", &d);

	massive = get_data(a,b,c,d);
	poi = &massive;	
	put_data(poi);	

return 0;
}

struct line get_data(int a, int b, int c, int d){

	struct line data;

	data.cord1.x = a;
	data.cord1.y = b;
	data.cord2.x = c;
	data.cord2.y = d;

	return data;
}

void put_data(struct line *po){

	po->lenth = sqrt((float) pow((po->cord1.x - po->cord2.x),2) + pow((po->cord1.y - po->cord2.y),2));
	printf("\nКоординаты 1 точки: х = %d y = %d\nКоординаты 2 точки: x = %d y = %d\nДлинна линии между точками равна: %.1f\n",po->cord1.x,po->cord1.y,po->cord2.x,po->cord2.y,po->lenth);	

}

