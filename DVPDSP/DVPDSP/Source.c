#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	int m;
	int c1, c2, c3, dv, pol, h, w, d, n;
	int pdvp, pdsp, pd;

	printf("введите длину, ширину, глубину");
	scanf_s("%d%d%d", &h, &w, &d);
	pdvp = 800;
	pdsp = 650;
	pd = 700;
	c1 = h * 10 * w * 10 * 5;
	c2 = (2 * (h * 10 * d * 10 * 15))/ pow(10, 9);
	c3 = (2 * (w * 10 * d * 10 * 15))/ pow(10, 9);
	dv = (2 * (h * 10 * w * 10 * 10))/ pow(10, 9);
	n = h / 40;
	pol = (n * (d * 10 * w * 10 * 15))/pow(10, 9);
	m = (c1 * pdvp + c2 * pdsp + c3 * pdsp + dv * pd + pol * pdsp);
	printf("[% f]", m);

	return 0;
}
