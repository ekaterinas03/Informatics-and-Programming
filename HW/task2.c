#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //установим локализацию символов в консоли
	//1г/см^3 дсп
	//0,8г/см^3 двп
	//1.54г/см^3 дерево
	double h = 200, w = 100, d = 70, w2 = 50, tolsh1 = 0.5, tolsh2 = 1.5, tolsh3 = tolsh2, tolsh4 = 1, tolsh5 = tolsh4, V1, V2, V3, V4, V5, DSP = 1, DVP = 0.8, tree = 1.54;
	int result;
	V1 = (h * w * tolsh1)*DVP; //масса  задней стенки
	V2 = (d * h * tolsh2)*2*DSP; //масса боковых стен
	V3 = (w*d*tolsh3)*2/DSP;//масса крышек
	V4 = (h * w * tolsh4) * 2*tree;//масса дверей
	V5 = (h / 40) * (d * w * tolsh5)*DSP;//масса полок
	result = V1 + V2 + V3 + V4 + V5;//вычисляем результирующую массу
	printf("%d кг \n", result);//выводим
	system("PAUSE");//сделаем, чтобы консоль сразу не закрывалась
	return 0;
	//какие то странно большие числа выходят, лучше проверить формулы
}