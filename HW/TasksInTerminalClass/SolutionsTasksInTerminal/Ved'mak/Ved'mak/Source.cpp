#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //��������� ����������� �������� � �������
	int a = 1, b = 5, c = 10, d = 25;
	int n;
	printf("������� ��������� ����� �������� \n");
	scanf("%d", &n);
	int str = n / d + n % d / c + n % d % c / b + n % b;
	printf("%d", str);
}
return 0;