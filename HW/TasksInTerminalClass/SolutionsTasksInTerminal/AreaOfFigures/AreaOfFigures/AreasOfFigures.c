#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int RectangleArea() {
	//input 
	int a, b;
	printf("Input parameters of the rectangle : a = ");
	scanf_s("%d", &a);
	printf("\t\t\t\t    b = ");
	scanf_s("%d", &b);

	//actions
	int S;
	S = a * b;

	//output
	printf("Area of the rectangle: S = %d\n", S);
	return 0;
}

int TriangleArea() {
	//input 
	int a, h;
	printf("\nInput parameters of the triangle: a = ");
	scanf_s("%d", &a);
	printf("\t\t\t\t  h = ");
	scanf_s("%d", &h);

	//actions
	double S;
	S = 0.5 * a * h;

	//output
	printf("The area of the triangle: S = %2f\n", S);
	return 0;
}

int CircleArea() {
	//input 
	int R;
	printf("\nInput the radius of the circle: R = ");
	scanf_s("%d", &R);

	//actions
	double S;
	S = M_PI * R;

	//output
	printf("Area of the circle: S = %4lf\n", S);
	return 0;
}

int main()
{
	RectangleArea();
	TriangleArea();
	CircleArea();
	return 0;
}