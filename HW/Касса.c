#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>


void getcode(int code[20][4], int count) { //Создаем штрих-код случайным образом
	srand(time(NULL));//установка сида для рандомной генерации на основе функции time
	for (int i = 0; i < 4; i++) {
		code[count][i] = 0 + rand() % 9;//Заполнение массива случайными цифрами от 0 до 9
	}
	
}
void getcena(int cenas[20][1], int count) {//Установка цены (случайная)
	srand(time(NULL));//установка сида для рандомной генерации на основе функции time
	int cena = cena = 45 + rand() % 56;//генерация цены (от 45 до 56)
	int skidca = 1 + rand() % (50 - 1);//генерация скидки от 1 до 49%
	int newcena = cena - (cena * skidca) / 100;//вычисление новой цены
	cenas[count][0] = newcena;
}

void getInfo(char names[20][10],int cenas[20],int codes[20][4],int count) {//формирование строки "информация"
	for (int i = 0; i < count; i++) {
		int scet = 1;
		printf("%i%i%i%i -- %s -- %ix%i\n", codes[i][0],codes[i][1],codes[i][2],codes[i][3],&names[i], scet, cenas[i]);
	}
}
int main() {
	char locale = setlocale(LC_ALL, "");//установка локализации
	char names[20][10];//массив имен
	int codes[20][4], cenas[20];//массив штрих-кодов и цен
	int controlNum, count = 0;//переменные контроля ввода и подсчет отсканированных товаров
	bool control = true;//контроль цикла
	system("chcp 1251");//установка кодировки на странице консоли
	system("cls");//очистка консоли
	printf("Нажмите 1, чтобы отсканировать товар.\nНажмите 2, чтобы показать описание отсканированного товара.\nНажмите 3, чтобы добавить данные о товаре в чек.\nНажмите 4, чтобы рассчитать итогову сумму к оплате.\n");
	while (control) {//цикл, где выбирается, что делать
		scanf("%i", &controlNum);
		if (controlNum == 1) {//Отсканировать новый товар
			printf("Введите наименование продукта.\n");
			char* s1;
			scanf("%s", names[count]);
			getcode(codes, count);
			getcena(cenas, count);
			count++;//прибавляем единицу, если товар успешно отсканирован
		}else if (controlNum == 2) {//Показ описания уже отсканированных товаров
			int scet;
			for (int i = 0; i < count; i++) {
				scet = 0;
				char* s1 = names[i];
				for (int j = 0; j < count; j++) {
					if (strcmp(s1, names[j]) == 0) {
						scet++;//прибавляем единицу если обнаружили совпадение названий отсканированных товаров
					}
				}
				printf("%i%i%i%i -- %s -- %ix%i\n", codes[i][0],codes[i][1],codes[i][2],codes[i][3],&names[i], scet, cenas[i]);
			}
		}
	}
}