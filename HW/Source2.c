#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //��������� ����������� �������� � �������
	//������ ����� ������
	int i = 0;
	int a = 0, b = 0;
	b = rand() % 1000; //����������� ��������� �����
	while (a != b) {
		printf("����� ����� \n");
		scanf("%d", &a);
		if (a < b) {//������ �������
			printf("���������� ����� ������ \n");
		}
		else if (a == b) {
			printf("�������!\n");
		}
		else if (a > b) {
			printf("���������� ����� ������ \n");
		}
	}
	printf("%i", funk2());//�������� 2 ����� ������
}
int funk2() {//2 ����� ������

	int a = 0;
	int max = 1000;
	int min = 1;
	int u = min+rand()%(max-min+1);
	char user;
	int counter = 0;
	int i = 0;
	printf("������� ����� \n");
	scanf("%d", &a);
	printf("������ �������� %d\n", u);
	while (u != a) {
		printf("min %d max %d\n", min, max);
		scanf("%c\n", &user);
		if (user == '<') {
			max = u;
			u = min+rand()%(max-min+1);
			printf("������ �������� %d\n", u);
		}
		else if (user == '>') {
			min = u;
			u = min+rand()%(max-min+1);
			printf("������ �������� %d\n", u);
		}
		else if (user == '=') {
			return counter;
		}
	}

}