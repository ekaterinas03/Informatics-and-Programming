#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //установим локализацию символов в консоли
	//Первый режим работы
	int i = 0;
	int a = 0, b = 0;
	b = rand() % 1000; //сгенерируем случайное число
	while (a != b) {
		printf("Введи число \n");
		scanf("%d", &a);
		if (a < b) {//задаем условия
			printf("Загаданное число больше \n");
		}
		else if (a == b) {
			printf("Угадали!\n");
		}
		else if (a > b) {
			printf("Загаданное число меньше \n");
		}
	}
	printf("%i", funk2());//вызываем 2 режим работы
}
int funk2() {//2 режим работы

	int a = 0;
	int max = 1000;
	int min = 1;
	int u = min+rand()%(max-min+1);
	char user;
	int counter = 0;
	int i = 0;
	printf("Загадай число \n");
	scanf("%d", &a);
	printf("машина загадала %d\n", u);
	while (u != a) {
		printf("min %d max %d\n", min, max);
		scanf("%c\n", &user);
		if (user == '<') {
			max = u;
			u = min+rand()%(max-min+1);
			printf("машина загадала %d\n", u);
		}
		else if (user == '>') {
			min = u;
			u = min+rand()%(max-min+1);
			printf("машина загадала %d\n", u);
		}
		else if (user == '=') {
			return counter;
		}
	}

}