#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void generated(char *a, int n) {//�������� ���������� ����� ������� n
	srand(time(NULL));
	for (int i = 0;i < n;i++) {
		a[i] = 1 + rand() % 8;
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (a[i] == a[j] && i != j) { a[j] += 1; }
		}
		printf("%d", a[i]);
		
	}
	printf("\n");
}

int main() {
	char* locale = setlocale(LC_ALL, ""); //��������� ����������� �������� � �������
	int n;
	int cows = 0, bull = 0;//����
	scanf("%d", &n);


	char* CPU = NULL;
	CPU = (int*)malloc(n * sizeof(int));
	generated(CPU, n);

	while (bull != n) {//���� ���� ���� ����� ����� �� ������ ����� ������ ���������������� �����
		int pers;
		cows = 0; bull = 0;
		scanf("%d", &pers);
		char* persArr = NULL;
		persArr = (int*)malloc(n * sizeof(int));
		for (int i = n - 1; pers; pers /= 10) persArr[i--] = pers % 10;
		for (int i = 0;i < n;i++) {
			int c = persArr[i];
			for (int j = 0; j < n;j++) {
				if (c == CPU[j] && i == j) {
					bull++;
				}
				else if (c == CPU[j] && i != j) {
					cows++;
				}
			}
		}
		printf("���������: %d cows � %d bulls \n",cows,bull);
	}
}
