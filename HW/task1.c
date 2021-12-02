#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //установим локализацию символов в консоли
	int a = 1, b = 5, c = 10, d = 25;//переменные определения ценностей монет
	int n;//переменная стоимости услуг ведьмака
	printf("Введите стоимость услуг ведьмака \n");
	scanf("%d", &n);
	int str = n / d + n % d / c + n % d % c / b + n % b;//формула подсчета минимального кол-ва монет для оплаты услуг ведьмака
	printf("%d",str);
}