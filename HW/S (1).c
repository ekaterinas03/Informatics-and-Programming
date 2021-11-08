#include <stdio.h>
#include <locale.h>
#include <math.h>
# define M_PI		3.14159265358979323846


int main() {
	char* locale = setlocale(LC_ALL, ""); // Локализация символов в консоли 
	int a, h, b, r;
	scanf("%d", &a);
	scanf("%d", &h);
	scanf("%d", &b);
	scanf("%d", &r);
	printf("%d\n", Strig(a, h));
	printf("%d\n", Ssq(a, b));
	printf("%d\n", Srad(r));
}
int Strig(int a,int h) {
	return (0.5 * a * h);
}
int Ssq(int a, int b) {
	return(a * b);
}
int Srad(int r) {
	return(M_PI * (r * r));
}





















