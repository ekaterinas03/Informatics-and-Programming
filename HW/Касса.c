#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>


void getcode(int code[20][4], int count) { //������� �����-��� ��������� �������
	srand(time(NULL));//��������� ���� ��� ��������� ��������� �� ������ ������� time
	for (int i = 0; i < 4; i++) {
		code[count][i] = 0 + rand() % 9;//���������� ������� ���������� ������� �� 0 �� 9
	}
	
}
void getcena(int cenas[20][1], int count) {//��������� ���� (���������)
	srand(time(NULL));//��������� ���� ��� ��������� ��������� �� ������ ������� time
	int cena = cena = 45 + rand() % 56;//��������� ���� (�� 45 �� 56)
	int skidca = 1 + rand() % (50 - 1);//��������� ������ �� 1 �� 49%
	int newcena = cena - (cena * skidca) / 100;//���������� ����� ����
	cenas[count][0] = newcena;
}

void getInfo(char names[20][10],int cenas[20],int codes[20][4],int count) {//������������ ������ "����������"
	for (int i = 0; i < count; i++) {
		int scet = 1;
		printf("%i%i%i%i -- %s -- %ix%i\n", codes[i][0],codes[i][1],codes[i][2],codes[i][3],&names[i], scet, cenas[i]);
	}
}
int main() {
	char locale = setlocale(LC_ALL, "");//��������� �����������
	char names[20][10];//������ ����
	int codes[20][4], cenas[20];//������ �����-����� � ���
	int controlNum, count = 0;//���������� �������� ����� � ������� ��������������� �������
	bool control = true;//�������� �����
	system("chcp 1251");//��������� ��������� �� �������� �������
	system("cls");//������� �������
	printf("������� 1, ����� ������������� �����.\n������� 2, ����� �������� �������� ���������������� ������.\n������� 3, ����� �������� ������ � ������ � ���.\n������� 4, ����� ���������� ������� ����� � ������.\n");
	while (control) {//����, ��� ����������, ��� ������
		scanf("%i", &controlNum);
		if (controlNum == 1) {//������������� ����� �����
			printf("������� ������������ ��������.\n");
			char* s1;
			scanf("%s", names[count]);
			getcode(codes, count);
			getcena(cenas, count);
			count++;//���������� �������, ���� ����� ������� ������������
		}else if (controlNum == 2) {//����� �������� ��� ��������������� �������
			int scet;
			for (int i = 0; i < count; i++) {
				scet = 0;
				char* s1 = names[i];
				for (int j = 0; j < count; j++) {
					if (strcmp(s1, names[j]) == 0) {
						scet++;//���������� ������� ���� ���������� ���������� �������� ��������������� �������
					}
				}
				printf("%i%i%i%i -- %s -- %ix%i\n", codes[i][0],codes[i][1],codes[i][2],codes[i][3],&names[i], scet, cenas[i]);
			}
		}
	}
}