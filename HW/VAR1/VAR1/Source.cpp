#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	int n;
	float c1, c2, c3, dv, pol, h, w, d, m;
	int pdvp, pdsp, pd;

	printf("������� �����, ������, ������� � �����������");
	scanf("%f%f%f", &h, &w, &d);
	pdvp = 800;
	pdsp = 650;
	pd = 700;
	c1 = (h * 10 * w * 10 * 5) / 100000000; printf(" ������ ������ %f", c1);
	c2 = (2 * (h * 10 * d * 10 * 15)) / pow(10, 9); printf(" ������� %f", c2);
	c3 = (2 * (w * 10 * d * 10 * 15)) / pow(10, 9); printf(" ���� � ��� %f", c3);
	dv = ((h * 10 * w * 10 * 10)) / pow(10, 9); printf(" ����� %f", dv);
	n = h / 40; printf(" ���������� ����� %d", n);
	pol = (n * (d * 10 * w * 10 * 15)) / pow(10, 9); printf(" ������� %f", pol);
	m = (c1 * pdvp + c2 * pdsp + c3 * pdsp + dv * pd + pol * pdsp);
	printf(" ����� ����� %f", m);

	return 0;
}
