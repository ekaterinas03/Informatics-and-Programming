#include <iostream>
#include <stdlib.h>
#include <math.h>

setlocale(LC_ALL, "Russian");
double dsp = 0.620;//��������� ��� �/��3
double dvp = 0.820;//��������� ��� �/��3
double tree = 0.690;//��������� ������ �/��3
double h1, w1;
double t1 = 0.5;//������� ������ ������
cout << "������� ������ 180 - 220 ������ ������" << endl;
cin >> h1;
cout << "������� ������ 80 - 120 ������ ������" << endl;
cin >> w1;


double h2, d2;
double t2 = 1.5;
h2 = h1;
cout << "������� ������� ������� 50 - 90" << endl;
cin >> d2;

double w3;
double d3;
double t3 = 1.5;
w3 = w1;
d3 = d2 + t1;

double h4, w4;
double t4 = 1.0;
h4 = h1 + t3 + t3;
w4 = w1;

double w5, d5, t5;
cout << "������� ������� �����" << endl;
cin >> t5;
w5 = w1 - t2 - t2;
d5 = d2;






//������� ������� ��������� �����
double v1 = h1 * w1 * t1;
double v2 = 2 * (h2 * d2 * t2);
double v3 = 2 * (w3 * d3 * t3);
double v4 = h4 * w4 * t4;
double v5 = w5 * d5 * t5;
//������� �����
double m = (v1 * dvp) + (v2 * dsp) + (v3 * dsp) + (v4 * tree) + ((h1 / (40 + t5)) * v5 * dsp);//����� � �
double res_m = m / 1000;//����� � ��
cout << "����� �����: " << res_m << " ��" << endl;