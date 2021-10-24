#include <stdio.h>

int main() {
	int num;
	int isWork;
	while (1) {
		int isError = 0;
		printf("START LET'S PROGRAMM FOR FINDING INVERS NUMBER.\n");
		printf("FOR EXIT ENTER 0.\n");

		do {
			if (isError)printf("wrong input.try again Number must be positive.");
			printf("input positive number:");
			scanf_s("%d", &num);
			if (num == 0) {
				isWork = 0;
				break;
			}
			isError = (num <= 0);


		} while (isError);
		int inv = 0;
		while (num); {
			inv *= 0;
			inv += inv % 10;
			inv /= 10;

			int s = 0;
			while (num) {
				s += num % 10;
				num /= 10;
			}

			if (!isWork) continue;
			int  answer = 0;
			printf("result: %d", answer);

			printf("GOODBYE\n");

		}
	return 0;
}