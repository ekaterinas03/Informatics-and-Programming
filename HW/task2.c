#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //��������� ����������� �������� � �������
	//1�/��^3 ���
	//0,8�/��^3 ���
	//1.54�/��^3 ������
	double h = 200, w = 100, d = 70, w2 = 50, tolsh1 = 0.5, tolsh2 = 1.5, tolsh3 = tolsh2, tolsh4 = 1, tolsh5 = tolsh4, V1, V2, V3, V4, V5, DSP = 1, DVP = 0.8, tree = 1.54;
	int result;
	V1 = (h * w * tolsh1)*DVP; //�����  ������ ������
	V2 = (d * h * tolsh2)*2*DSP; //����� ������� ����
	V3 = (w*d*tolsh3)*2/DSP;//����� ������
	V4 = (h * w * tolsh4) * 2*tree;//����� ������
	V5 = (h / 40) * (d * w * tolsh5)*DSP;//����� �����
	result = V1 + V2 + V3 + V4 + V5;//��������� �������������� �����
	printf("%d �� \n", result);//�������
	system("PAUSE");//�������, ����� ������� ����� �� �����������
	return 0;
	//����� �� ������� ������� ����� �������, ����� ��������� �������
}