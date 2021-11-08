#include <stdio.h>
#include <locale.h>
#include <math.h>
# define M_PI		3.14159265358979323846


int main() {
	char* locale = setlocale(LC_ALL, ""); // Локализация символов в консоли 
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%i\n",sredn(a, b, c));
	printf("%i\n", power(a, b, c));
	printf("%i\n", abs(a, b, c));
	printf("%i\n", sQrt(a, b, c));
}
int sredn(int a, int b, int c) {
	return((a + b + c) / 3);
}
int power(int a, int b, int c) {
	return((pow(a, 2) + pow(b, 2) + pow(c, 2)) / 3);
}
int abs(int a, int b, int c) {
	return((fabs(a) + fabs(b) + fabs(c)) / 3);
}
int sQrt(int a, int b, int c) {
	return((sqrt(a) + sqrt(b) + sqrt(c)) / 3);
}




















