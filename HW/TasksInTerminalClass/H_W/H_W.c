#include <math.h>
#include <studio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "russian");

	printf("Task with circles");
	//intit
	float x1, x2, y1, y2, r1, r2;
	float d;
	printf("введитепараметры 1-й окружности")(в виде x y r)
	scanf_s(" %f %f %f, x1, y1, r1");
	printf ("¬ведите парметры 2-й окружности (в виде  x y r )")
	scanf_s("%f %f %f", &x2, &y2, &r2);
	//action 
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	//output
	if (d == r1 + r2) {
		printf("kasautsa");
	}
	else
		if (d < r1 + r2) {
			printf("Sovpadaet");

		}
		else
			if (d + r1 < r2) || d + r2 < r1) { //||=OR
		printf("Odna vnutri drugoy");
       }
			else {
				printf("Odna vnutri drugoy");
			}
	return 0;
}
