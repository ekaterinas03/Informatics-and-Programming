#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
# define M_PI		3.14159265358979323846	/* pi */


int main() {
	char* locale = setlocale(LC_ALL, ""); //��������� ����������� �������� � �������
	int arr [] = { 0,1,2,3,4,5,6,7,8,9 };
	int summ = 0;

	for (int i = 0;i < sizeof(arr) / 4;i++) { //����� ��������� � ������ ���������
		if (arr[i] % 2 == 0) {
			summ += arr[i];
		}
	}
	printf("%i \n", summ);


	summ = 0;
	
	
	for (int i = 0;i < sizeof(arr)/4;i+=2) {//����� ��������� � ������ ��������
			summ = summ + arr[i];
	}
	printf("%i \n", summ);
	
	
	for (int i = 0;i < sizeof(arr) / 4;i++) {//�������� ������
		printf("%i ", arr[i]);
	}
	printf("\n������� ������ ������� �������� ");
	int zamenaIndex;
	scanf("%i", &zamenaIndex);
	printf("������� �������� ");
	scanf("%i", &arr[zamenaIndex]);
	for (int i = 0;i < sizeof(arr) / 4;i++) {//���������� ������
		printf("%i ", arr[i]);
	}
	printf("\n \n");

	//���������� ������
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0;i < sizeof(arr1) / 4;i++) {//�������� ������
		printf("%i ", arr1[i]);
	}
	//��� ��������������� �������
	int leight = sizeof(arr1) / 4;
	for (int i = 0;i < leight / 4;i++) {
		int temp = arr1[i];
		arr1[i] = arr1[leight - 1 - i];
		arr1[leight - 1 - i] = temp;
	}
	printf("\n");
	for (int i = 0;i < sizeof(arr1) / 4;i++) {//��������������� ������
		printf("%i ", arr1[i]);
	}
	//� �������������� ��������
	int arr1Copy[10];
	for (int i = 0;i < sizeof(arr1) / 4;i++) {
		arr1Copy[i] = arr1[leight - 1 - i];
	}
	printf("\n");
	for (int i = 0;i < sizeof(arr1Copy) / 4;i++) {//��������������� ������
		printf("%i ", arr1Copy[i]);
	}
}